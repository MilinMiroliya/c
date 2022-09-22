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

	a = (x*x*x) - (y*y*y) - (z*z*z) - (3*x*x*y) + (3*x*y*y) - (3*y*z*z) + (3*x*z*z) - (3*x*x*z) + (6*x*y*z);

	printf("> Answer is :- %d",a);

	getch();
}