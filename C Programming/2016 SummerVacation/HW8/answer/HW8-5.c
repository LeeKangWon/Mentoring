#include <stdio.h>
#include <string.h>
void delete_number(char *);

int main() 
{
	int i = 0;
	char str1[100] = {0};

	gets_s(str1,sizeof(str1));

	delete_number(str1);

	return 0;
}

void delete_number(char *str1)
{
	int i = 0;
	int j = 0;
	int number = 0;

	while(1)
	{
		printf("������ ���ڿ��� ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%d", &number);

		if(number <= 0)
		{
			printf("���� �Ǵ� 0�� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n");
			continue;
		}
		
		if(number > strlen(str1))
			number = strlen(str1);

		for(i=number-1; i<strlen(str1); i++)

		{
			str1[i] = str1[i+1];
		}
		printf("�����ϰ� ���� ���ڿ� : %s\n", str1);
		printf("�����ϰ� ���� ���ڿ��� ���� : %d\n", strlen(str1));

		if(strlen(str1) == 1)
		{
			printf("���� ���ڿ��� 1�� �Դϴ�. �����մϴ�.\n");
			break;
		}
	}

}

