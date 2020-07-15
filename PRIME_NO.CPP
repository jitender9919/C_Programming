#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int n,i,flag=0;
 clrscr();
 scanf("%d",&n);
 for(i=2;i<n/2;i++)
 {
  if(n%i==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
  printf("The no. is not prime.");
 else
  printf("The no. is Prime.");
 getch();
 return 0;
}
