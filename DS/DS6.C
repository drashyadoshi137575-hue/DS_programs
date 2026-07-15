#include<stdio.h>
#include<conio.h>

struct student
{
	int rollno;
	char name[20];
};
void main()
{
	struct student s1;
	clrscr();

	printf("\n Enter Roll no. :");
	scanf("%d", &s1.rollno);

	printf("\n Enter Name :");
	gets(s1.name);

	printf("\n Student Data is as follows..");
	printf("\n.............................");

	printf("\n Roll no. is : %d",s1.rollno);
	printf("\n Name is : %s",s1.name);
	getch();
}






