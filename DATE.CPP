#include<stdio.h>
#include<conio.h>
struct date
{
	int d,m,y;
};
void main()
{
	struct date tod;
	printf("Enter today's date: ");
	scanf("%d %d %d", &tod.d, &tod.m, &tod.y);
	printf("\n Today's date: %d/%d/%d",tod.d,tod.m,tod.y);
	getch();
}