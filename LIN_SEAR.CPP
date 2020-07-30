#include<stdio.h>
#include<conio.h>
int lin_search(int arr[], int n, int val);
void main()
{
	int arr[20], n, val, pos, i;
	clrscr();
	printf("Enter size of array:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n Enter value to be searched: ");
	scanf("%d",&val);
	pos=lin_search(arr, n, val);
	if(pos==-1)
		printf("Search unsuccessful.");
	else
		printf("%d found at %dth position.",val,pos+1);

	getch();
}
int lin_search(int arr[], int n, int val)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
			return i;

	}
	return -1;
}