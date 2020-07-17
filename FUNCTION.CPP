#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int x,y,sum;
	clrscr();
	printf("Enter 2 no.s :");
	scanf("%d %d", &x,&y);
	sum=add(x,y);
	printf("Sum is %d",sum);
	getch();
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return (c);
}