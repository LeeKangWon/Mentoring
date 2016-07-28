#include <stdio.h>

void array_change1(int [], int []);		//하나하나의 값을 변경하는 코드
void array_change2(int [], int []);		//반복문 안에 한번에 치환이 가능한 코드

int main() 
{
	int i = 0;
	int number1[10]={1,2,3,4,5,6,7,8,9,10};
	int number2[10]={11,12,13,14,15,16,17,18,19,20};
	array_change2(number1, number2);

	for(i = 0; i < 10; i++)
	{
		printf("%d ", number1[i]);
	}

	printf("\n");

	for(i = 0; i < 10; i++)
	{
		printf("%d ", number2[i]);
	}



	return 0;
}

void array_change1(int a[], int b[])
{
	int temp[10] = {0};
	int i = 0;
	for(i = 0; i < 10; i ++)
	{
		temp[i] = a[i];
	}

	for(i = 0; i < 10; i ++)
	{
		a[i] = b[i];
	}

	for(i = 0; i < 10; i ++)
	{
		b[i] = temp[i];
	}
}

void array_change2(int a[], int b[])
{
	int temp[10] = {0};
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}