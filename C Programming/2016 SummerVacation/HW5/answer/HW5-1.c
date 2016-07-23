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
		printf("메뉴를 선택하시오. 저축(1), 인출(2), 종료(3) : ");
		scanf("%d", &menu);

		switch(menu)
		{
			case  1:
				printf("저출할 금액:");
				scanf("%d", &amount);
				save(amount);
				break;
			case  2:
				printf("출금할 금액:");
				scanf("%d", &amount);
				draw(amount);
				break;
			case  3:
				printf("프로그램을 종료 합니다.");
				break;
		}
	}
	
}
void save(int amount)
{
	total_amount+=amount;
	printf("현재 잔액 : %d\n", total_amount);
	
}

void draw(int amount)
{
	if(amount < 0)
	{
		printf("인출할 돈이 음수 입니다.\n 다시 입력하세요.");
		return ;
	}

	if(total_amount <= amount)
	{
		printf("잔액이 부족합니다.\n");
		return ;
	}

	else
	{
		total_amount-=amount;
		printf("현재 잔액 : %d\n", total_amount);
	}
}
