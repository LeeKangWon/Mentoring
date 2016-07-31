#include <stdio.h>
void array_copy(int *, int *, int);
#define Size 5

int main() 
{
	int A[Size] = {1,2,3,4,5};
	int B[Size] = {0};
	int i = 0;
	for(i=0; i<Size; i ++)
		printf("%d ", A[i]);

	array_copy(A, B, Size);
	printf("\n");

	for(i=0; i<Size; i ++)
		printf("%d ", B[i]);

	return 0;
}

void array_copy(int *A, int *B, int size)
{
	int i = 0;
	for(i=0; i<size; i ++)
		*(B+i) = *(A+i);
}
