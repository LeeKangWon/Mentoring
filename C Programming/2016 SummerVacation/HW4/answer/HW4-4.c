#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_max(int,int,int);

int get_max(int number1, int number2, int number3) 
{ 
	int result = 0;
	if(number1 >= number2)
		result = number1;
	else
		result = number2;

	if(result >= number3)
		return result;
	else
		return number3;
}



int main()
{
	int number1, number2, number3;
	int answer = 0;
	printf("입력 :");
	scanf("%d %d %d", &number1, &number2, &number3);
	answer = get_max(number1, number2, number3);
	printf("결과 : %d", answer);

	return 0;
}