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
		printf("�ո� �Ǵ� �޸� (1 �Ǵ� 0) :");
		scanf("%d", &answer);

		if(answer == number)
			printf("�¾ҽ��ϴ�\n");
		else
			printf("Ʋ�Ƚ��ϴ�\n");

		printf("��� �Ͻðڽ��ϱ�?");
		scanf(" %c", &loop);

		if(loop == 'y')
			continue;
		else if(loop == 'n')
			break;
	}
	
	return 0;
}