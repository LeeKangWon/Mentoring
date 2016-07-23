#include <stdio.h>
void hanoi_tower(int, char, char, char);

int main() 
{
	hanoi_tower(4,'A','B','C');
	return 0;
}
void hanoi_tower(int n, char from, char tmp, char to)
{
	if(n==1)
		printf("���� 1�� %c���� %c�� �ű��.\n",from,tmp);
	else
	{
		hanoi_tower(n-1,from,to,tmp);
		printf("���� %d�� %c���� %c�� �ű��.\n",n,from,tmp);
		hanoi_tower(n-1,tmp,from,to);
	}
}
