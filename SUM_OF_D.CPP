#include<stdio.h>
#include<conio.h>
void main()
{
	int n, k, sum=0, prod=1, rem;
	clrscr();
	printf("Enter any no.: ");
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
	while(k>0)
	{
		rem=k%10;
		prod*=rem;
		k=k/10;
	}
	printf("\nProduct of digits is %d",prod);
	getch();
}