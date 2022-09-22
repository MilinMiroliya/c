#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;

	clrscr();

	printf("> Enter X : ");
	scanf("%d",&x);
	printf("> Enter Y : ");
	scanf("%d",&y);

	z = (x*x) + (2*x*y) + (y*y);

	printf("> Answer is :- %d",z);

	getch();
}