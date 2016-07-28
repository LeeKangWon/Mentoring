#include <stdio.h>

int main() 
{
	int i = 0;
	int stop = 0;
	int number[100]={0};
	printf("ют╥б:");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number[i]);
		if(number[i] == 0)
		{
			stop = i;
			break;
		}
	}
	for(i = 0; i < stop; i++)
	{
		if(number[i] % 2 == 0)
		{
			printf("%d ", number[i] / 2);
		}
		else
		{
			printf("%d ", 2*number[i]);
		}

	}
	return 0;
}