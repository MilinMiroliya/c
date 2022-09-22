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

	a = (x*x*x) + (y*y*y) + (z*z*z) + 3*(x+y) * (y+z) * (z+x);

	printf("> Answer is :- %d",a);

	getch();
}