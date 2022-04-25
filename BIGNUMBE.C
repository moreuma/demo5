#include<stdio.h>
#include<conio.h>
void main()

{
	int a,b,c;
	clrscr();
	printf("\n Enter the three number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is big number");
		}
		else
		{
			printf("\n c is big number");
		}

	}
	else
	{
		if(b>c)
		{
			printf("\n b is big number");
		}
		else
		{
			printf("\n c is big number");
		}
	}
	getch();
}