#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3];
	int b[3];
	int c[6];
	int i;

	clrscr();
	printf("Enter 3 values of A:");
	for(i=0;i<3;i++)
	{
	scanf("%d", &a[i]);
	}
	printf("Enter 3 values for B:");
	for(i=0;i<3;i++)
	{
	scanf("%d", &b[i]);
	}
	//Merged values of A and B
	for(i=0;i<3;i++)
	{
	c[i] = a[i];
	c[i + 3] = b[i];
	}
	printf("Merged values of C:");
	for(i=0;i<6;i++)
	{
	printf("%d", c[i]);
	}
getch();
}