#include<stdio.h>
#include<conio.h>
int bin_search(int arr[], int n, int val);
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
	pos=bin_search(arr, n, val);
	if(pos==-1)
		printf("Search unsuccessful.");
	else
		printf("%d found at %dth position.",val,pos+1);

	getch();
}
int bin_search(int arr[], int n, int val)
{
	int beg=0, end=n-1, mid;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==val)
			return mid;
		else if (arr[mid]>val)
			end=mid-1;
		else
			beg=mid+1;
	}
	return -1;
}