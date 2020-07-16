#include<stdio.h>
#include<conio.h>
void main()
{
	int n, sum=0, rem;
	clrscr();
	printf("Enter any no.: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
	getch();
}