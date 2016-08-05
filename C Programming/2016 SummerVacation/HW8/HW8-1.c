#include <stdio.h>


int main() 
{
	int ascii = 0;

	while(1)
	{
		printf("아스키 코드 = ?");
		scanf("%d", &ascii);

		if ((ascii >= 33) && (ascii <= 127))
			printf("%c\n", ascii);
		else
			break;
	}
}
