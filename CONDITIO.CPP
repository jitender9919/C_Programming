#include<stdio.h>
#include<conio.h>
void main()
{
	float m1,m2,m3,m4,tot,per;
	char grd;
	clrscr();
	printf("Enter marks of four subjects:\n");
	scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
	tot=m1+m2+m3+m4;
	per=tot/4;
	if(tot>=85)
		grd='A';
	else if(tot>=70)
		grd='B';
	else if(tot>=55)
		grd='C';
	else if(tot>=40)
		grd='D';
	else
		grd='E';
	printf("\nYour percentage is %.2f and grade is %c",per,grd);
	getch();
}