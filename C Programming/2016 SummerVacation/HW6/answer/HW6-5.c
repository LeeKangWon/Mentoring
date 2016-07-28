#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j = 0;
	int number[3][5]={0};
	srand((unsigned)time(NULL));
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			number[i][j] = (rand() % 30) + 1;
			printf("%d\t", number[i][j]);
		}
		printf("\n");
	}

	printf("각 행의 합 : %d\n", number[0][0]+number[0][1]+number[0][2]+number[0][3]+number[0][4]);
	printf("각 행의 합 : %d\n", number[1][0]+number[1][1]+number[1][2]+number[1][3]+number[1][4]);
	printf("각 행의 합 : %d\n", number[2][0]+number[2][1]+number[2][2]+number[2][3]+number[2][4]);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("각 열의 합 : %d\n", number[0][0]+number[1][0]+number[2][0]);
	printf("각 열의 합 : %d\n", number[0][1]+number[1][1]+number[2][1]);
	printf("각 열의 합 : %d\n", number[0][2]+number[1][2]+number[2][2]);
	printf("각 열의 합 : %d\n", number[0][3]+number[1][3]+number[2][3]);
	printf("각 열의 합 : %d\n", number[0][4]+number[1][4]+number[2][4]);



	return 0;
}