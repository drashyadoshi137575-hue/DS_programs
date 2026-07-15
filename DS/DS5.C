#include<stdio.h>
#include<conio.h>

enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};

void main()
{
	enum week w;
	clrscr();
	w = Mon;

	printf("\n Constant value of Mon is : %d",w);
	getch();
}