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
	int i = 0;
	int number = 0;
	srand( (unsigned)time( NULL ) );
	for(i=0;i<5;i++)
	{
		number = b_rand();
		printf("%d ", number);
	}
	
	return 0;
}