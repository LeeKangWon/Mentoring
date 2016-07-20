#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int b_rand();

int b_rand()
{
	int random_number = rand()%2;
	return random_number;
}

int main()
{
	int answer = 0;
	int number = 0;
	char loop = 'y';
	srand( (unsigned)time( NULL ) );
	while(loop == 'y')
	{
		number = b_rand();
		printf("앞면 또는 뒷면 (1 또는 0) :");
		scanf("%d", &answer);

		if(answer == number)
			printf("맞았습니다\n");
		else
			printf("틀렸습니다\n");

		printf("계속 하시겠습니까?");
		scanf(" %c", &loop);

		if(loop == 'y')
			continue;
		else if(loop == 'n')
			break;
	}
	
	return 0;
}