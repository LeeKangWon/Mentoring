#include <stdio.h>

int main() 
{
	int num_array[5]={0};
	int *pNumArray = num_array;
	printf("ют╥б : ");
	scanf("%d %d %d %d %d", pNumArray, pNumArray+1, pNumArray+2, pNumArray+3, pNumArray+4);
	printf("\n");
	printf("%d %d %d", *pNumArray, *(pNumArray+2), *(pNumArray+4));
	return 0;
}
