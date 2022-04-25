#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n year is leapyear");
	}
	else
	{
		printf("\n 	year is not leaoyear");
	}
	getch();
}
