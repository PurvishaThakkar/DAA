#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,n;
	clrscr();
	n=5;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);


	}
	getch();
}