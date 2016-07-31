#include <stdio.h>

int main() 
{
	int number1, number2;
	int *pNumber1 = &number1, *pNumber2 = &number2;

	printf("입력 : ");
	scanf("%d %d", pNumber1, pNumber2);
	printf("\n");
	printf("출력 : ");
	printf("%d + %d = %d\n", *pNumber1, *pNumber2, *pNumber1 + *pNumber2);
	printf("%d - %d = %d\n", *pNumber1, *pNumber2, *pNumber1 - *pNumber2);
	printf("%d * %d = %d\n", *pNumber1, *pNumber2, *pNumber1 * *pNumber2);
	printf("%d / %d = %d\n", *pNumber1, *pNumber2, *pNumber1 / *pNumber2);
	return 0;
}
