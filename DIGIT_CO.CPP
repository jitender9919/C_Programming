#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0;
	clrscr();
	printf("Enter any positive no. :");
	scanf("%d",&n);
	if(n>0 && n<10)
		count=n;
	if(n>=10 && n<100)
		count=9+2*(n-9);
	printf("\n No. of digits: %d uptil %d",count,n);
	getch();
}