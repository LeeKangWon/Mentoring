#include <stdio.h>
#define PASSWORD 1004
int check();

int check_number = 0;

int main() 
{
	while(check_number != 3)
	{
		if(check() == 1)
			return 0;
		else
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		
	}
	printf("�α��� Ƚ�� �ʰ�");
	return 0;
}
int check()
{
	int password = 0;
	check_number++;
	printf("��й�ȣ�� �Է��ϼ���:");
	scanf("%d", &password);

	if(password == PASSWORD)
	{
		printf("�α��� ����\n");
		return 1;
	}
	return 0;
}
