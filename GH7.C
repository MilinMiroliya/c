#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,a;

	clrscr();

	printf("> Enter X : ");
	scanf("%d",&x);
	printf("> Enter Y : ");
	scanf("%d",&y);
	printf("> Enter Z : ");
	scanf("%d",&z);

	a = (x*x) + (y*y) + (z*z) + (2*x*y) + (2*y*z) + (2*z*x);

	printf("> Answer is :- %d",a);

	getch();
}