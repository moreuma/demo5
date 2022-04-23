#include<stdio.h>
#include<conio.h>
void main()
{
		int age;
	clrscr();
	printf("\nEnter the Age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n you are allowed for driving");
	}
	else
	{
		printf("\n you are not allowed for driving");
	}

	getch();
}