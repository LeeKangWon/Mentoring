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
		printf("삭제할 문자열의 번호를 입력하시오 : ");
		scanf("%d", &number);

		if(number <= 0)
		{
			printf("음수 또는 0을 입력하셨습니다. 다시 입력하세요\n");
			continue;
		}
		
		if(number > strlen(str1))
			number = strlen(str1);

		for(i=number-1; i<strlen(str1); i++)

		{
			str1[i] = str1[i+1];
		}
		printf("삭제하고 남은 문자열 : %s\n", str1);
		printf("삭제하고 남은 문자열의 길이 : %d\n", strlen(str1));

		if(strlen(str1) == 1)
		{
			printf("남은 문자열이 1개 입니다. 종료합니다.\n");
			break;
		}
	}

}

