#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get_dice_face();


int main()
{
	char menu;
	int i = 0;
	while(1)
	{
		fflush(stdin);
		printf("주사위를 100번 굴리시겠습니까(y/n)?");
		scanf("%c", &menu);
		if(menu == 'y')
			get_dice_face();
		else if(menu == 'n')
			break;
	}
	return 0;

}
void get_dice_face()
{
	int result = 0;
	int i =0;
	static int one, two, three, four, five, six = 0;
	srand((unsigned)time(NULL));
	for(i=0; i<100; i++)
	{
		result = rand()%6 + 1;
		switch(result)
		{
		case 1:
			one++;
			break;
		case 2:
			two++;
			break;
		case 3:
			three++;
			break;
		case 4:
			four++;
			break;
		case 5:
			five++;
			break;
		case 6:
			six++;
			break;
		}
	}

	printf("%d %d %d %d %d %d\n",one,two,three,four,five,six);

}