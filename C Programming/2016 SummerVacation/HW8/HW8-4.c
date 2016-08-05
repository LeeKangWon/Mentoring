#include <stdio.h>
#include <string.h>
void delete_space(char *);

int main() 
{
	int i = 0;
	char str1[100] = {0};

	gets_s(str1,sizeof(str1));

	delete_space(str1);
}

void delete_space(char *str1)
{
	int i = 0;
	for(i=0; str1[i]!=NULL; i++)
	{
		if (str1[i] == ' ')
			continue;
		printf("%c", str1[i]);
	}
}

