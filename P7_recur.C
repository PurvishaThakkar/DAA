//binary search
#include<stdio.h>
#include<conio.h>
void binarysearch(int [],int ,int ,int);//start,array,search
void sort(int [],int);
void main()
{
	int n,i,a[100],x;
	clrscr();
	printf("Enter Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter element %d:",i+1);
	scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("Sorted Array");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	printf("\nEnter Element to be search:");
	scanf("%d",&x);
	binarysearch(a,0,n,x);
	getch();
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}
}
void binarysearch(int a[100],int l,int  h,int x)
{
	int mid,i;
	if(l>h)
	{
	    printf("Element not Found..");
	    return;
	}
	mid=(l+h)/2;
	if(x==a[mid])
	{
		printf("Element is found at %d position",mid+1);
	}
	else if(x<a[mid])
	{
		binarysearch(a,l,mid-1,x);
	}
	else if(x>a[mid])
	{
		binarysearch(a,mid+1,h,x);
	}


}