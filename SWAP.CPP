#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
	int a,b;
	clrscr();
	printf("enter two no.s: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a = %d b = %d",a,b);
	getch();
}
void swap(int *p, int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
