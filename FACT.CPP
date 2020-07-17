#include<stdio.h>
#include<conio.h>
long fact(int n)
{
	if(n>0)
		return (n*fact(n-1));
	else
		return (1);
}
void main()
{
	int n;
	clrscr();
	printf("enter any no.find factorial: ");
	scanf("%d",&n);
	printf("\n Factorial of %d is %d",n, fact(n));
	getch();
}