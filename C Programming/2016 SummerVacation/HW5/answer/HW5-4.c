#include<stdio.h>
int div(int);


int main()
{
	int number = 0;
	int result = 0;
	printf("ÀÔ·Â:");
	scanf("%d", &number);
	result = div(number);
	printf("%d", result);
	return 0;

}
int div(int number)
{
	static int result = 0;
	if(number == 1)
		return result;
	else if(number % 2 == 0)
	{
		result++;
		return div(number/2);
	}
	else
	{
		result++;
		return div(number/3);
	}

}