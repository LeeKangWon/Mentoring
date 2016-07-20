#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int function(int,int);

int function(int number1, int number2) 
{ 
	int pow_number1 = number1 * number1;
	int pow_number2 = number2 * number2;

	if(pow_number1 >= pow_number2)
		return pow_number1 - pow_number2;
	else
		return pow_number2 - pow_number1;
}



int main()
{
	int number1, number2;
	int answer = 0;
	printf("입력 :");
	scanf("%d %d", &number1, &number2);
	answer = function(number1, number2);
	printf("결과 : %d", answer);

	return 0;
}