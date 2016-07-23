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
			printf("비밀번호가 틀렸습니다.\n");
		
	}
	printf("로그인 횟수 초과");
	return 0;
}
int check()
{
	int password = 0;
	check_number++;
	printf("비밀번호를 입력하세요:");
	scanf("%d", &password);

	if(password == PASSWORD)
	{
		printf("로그인 성공\n");
		return 1;
	}
	return 0;
}
