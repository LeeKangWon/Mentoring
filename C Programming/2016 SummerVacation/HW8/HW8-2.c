#include <stdio.h>
void double_print(char *);

int main() 
{
	int i = 0;
	char str[100] = {0};

	scanf("%s", str);

	double_print(str);
}

void double_print(char *str)
{
	printf("%s%s",str,str);
}

