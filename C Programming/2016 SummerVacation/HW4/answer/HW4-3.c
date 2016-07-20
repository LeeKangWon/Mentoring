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
	printf("연속된 오일러 수의 차가 0.0000001보다 작을 때까지의 오일러 수를 구하여 출력하는 프로그램입니다.\n");

	for(i=0; i<20; i++)
	{
		re = Euler(i+1)-Euler(i);
		if(re<0.0000001)
		{
			re1 = i;
			break;
		}
		printf( "%d일때 %.7f - %.7f = %.7f 이다.\n", i, Euler(i+1),Euler(i), re);
	}
	printf("\n따라서 %d부터 0.0000001보다 작다.\n", i);

	return 0;
}