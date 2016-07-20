#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int factorial(int);
double Euler(int);

int factorial(int n) 
{ 
	int i; 
	double result = 1; 
	for(i = 1; i <= n; i++) 
		result *= i;// result = result * x 
	return result; 
}

double Euler(int n)
{
	if(n <= 0)
		return 1;
	return (Euler(n-1) + (float) 1/factorial(n));

}


int main()
{
	int i;
	float re;
	int re1;
	printf("���ӵ� ���Ϸ� ���� ���� 0.0000001���� ���� �������� ���Ϸ� ���� ���Ͽ� ����ϴ� ���α׷��Դϴ�.\n");

	for(i=0; i<20; i++)
	{
		re = Euler(i+1)-Euler(i);
		if(re<0.0000001)
		{
			re1 = i;
			break;
		}
		printf( "%d�϶� %.7f - %.7f = %.7f �̴�.\n", i, Euler(i+1),Euler(i), re);
	}
	printf("\n���� %d���� 0.0000001���� �۴�.\n", i);

	return 0;
}