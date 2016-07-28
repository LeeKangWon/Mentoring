#include <stdio.h>

int main() 
{
	int i = 0;
	char character[10];
	printf("ют╥б:");
	for(i = 0; i < 10; i++)
		scanf(" %c", &character[i]);
	printf("%c %c %c",character[0],character[3],character[6]);

	return 0;
}