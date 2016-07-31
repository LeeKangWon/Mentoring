#include <stdio.h>

int main() 
{
	int num_array[10]={0};
	int *pNumArray = num_array;
	int  i=0, even=0, odd=0;
	printf("ÀÔ·Â : ");
	for(i=0; i<10; i++)
		scanf("%d", pNumArray + i);
	printf("\n");
	for(i=0; i<10; i++)
	{
		if(*(pNumArray+i) % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("Â¦¼ö : %d, È¦¼ö : %d", even, odd);
	return 0;
}
