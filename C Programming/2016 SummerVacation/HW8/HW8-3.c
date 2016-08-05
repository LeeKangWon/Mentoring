#include <stdio.h>
#include <string.h>
void sum_str_length(char *, char *);

int main() 
{
	int i = 0;
	char str1[100] = {0};
	char str2[100] = {0};

	gets_s(str1,sizeof(str1));
	gets_s(str2,sizeof(str2));

	sum_str_length(str1, str2);
}

void sum_str_length(char *str1, char *str2)
{
	printf("두 문자열 길이의 합 : %d", strlen(str1) + strlen(str2));
}

