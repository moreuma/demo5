#include<stdio.h>
#include<conio.h>
void main()
{
	int age ;
	clrscr();
	printf("\n Enter the Age:");
	scanf("%d",&age);
	if(age>18)
	{
		if (age>=18 &&age<=65)
		{
			printf("\n Work fine");
		}
		else
		{
			printf("\n retired");
		}
	}
	else
	{
		printf("\n do not have miner");
	}
	getch();
}