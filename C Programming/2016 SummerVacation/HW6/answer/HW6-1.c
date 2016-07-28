#include <stdio.h>

int main() 
{
	int i = 0;
	char character[10];
	printf("ют╥б:");
	for(i = 0; i < 10; i++)
		scanf(" %c", &character[i]);
	for(i = 0; i < 10; i++)
		printf("%c",character[i]);

	return 0;
}