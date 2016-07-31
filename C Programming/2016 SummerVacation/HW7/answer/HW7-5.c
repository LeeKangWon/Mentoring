#include <stdio.h>
void get_sum_diff(int , int , int *, int *);
#define Size 5

int main() 
{
	int number1, number2, sum, diff;
	printf("두 수 입력 : ");
	scanf("%d %d", &number1, &number2);
	printf("\n");

	get_sum_diff(number1, number2, &sum, &diff);

	printf("두수의 합 : %d\n", sum);
	printf("두수의 합 : %d\n", diff);
	return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;
	*p_diff = x- y;

}
