#include<stdio.h>
void save(int);
void draw(int);

int total_amount = 0;

int main()
{
	int menu = 0;
	int amount = 0;
	while(menu!=3)
	{
		printf("�޴��� �����Ͻÿ�. ����(1), ����(2), ����(3) : ");
		scanf("%d", &menu);

		switch(menu)
		{
			case  1:
				printf("������ �ݾ�:");
				scanf("%d", &amount);
				save(amount);
				break;
			case  2:
				printf("����� �ݾ�:");
				scanf("%d", &amount);
				draw(amount);
				break;
			case  3:
				printf("���α׷��� ���� �մϴ�.");
				break;
		}
	}
	
}
void save(int amount)
{
	total_amount+=amount;
	printf("���� �ܾ� : %d\n", total_amount);
	
}

void draw(int amount)
{
	if(amount < 0)
	{
		printf("������ ���� ���� �Դϴ�.\n �ٽ� �Է��ϼ���.");
		return ;
	}

	if(total_amount <= amount)
	{
		printf("�ܾ��� �����մϴ�.\n");
		return ;
	}

	else
	{
		total_amount-=amount;
		printf("���� �ܾ� : %d\n", total_amount);
	}
}
