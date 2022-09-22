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

	z = (x*x*x) - (3*x*x*y) + (3*x*y*y) - (y*y*y);

	printf("> Answer is :- %d",z);

	getch();
}