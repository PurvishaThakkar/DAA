//binary search
#include<stdio.h>
#include<conio.h>
#include<math.h>
//start,array,search
void binarysearch(int a[100],int low,int high,int x);
void sort(int [],int);
void main()
{
	int n,i,a[100],x,low,high;
	clrscr();
	printf("Enter Size:");  ///size of array
	scanf("%d",&n);

	for(i=0;i<n;i++)  //loop for getting array values
	{
	printf("Enter element %d:",i+1);
	scanf("%d",&a[i]);
	}
	sort(a,n);      //calling sort function to set in ascending order.
	printf("Sorted Array");
	for(i=0;i<n;i++)    //loop for print the array values.
	{
		printf("\t %d",a[i]);
	}
	printf("\nEnter Element to be search:");
	scanf("%d",&x);
	low=0;   //set low at 0 index of array.
	high=n-1;   //set high at last index number of array.
	binarysearch(a,low,high,x);   //call function of binarysearch().
getch();     //hold the data on a screen after execution.
}


void binarysearch(int a[100],int low,int  high,int x)
{
	    int mid,j=0;
      do{


		   mid=(low+high)/2;   //find middle index number of array.

		   if(x==a[mid]) //if at middle point we get the search value then break the loop.
		   {
		    j=mid;
		    printf(" potition = %d",j+1);
		    break;
		   }
		   else if(x<a[mid])  //if serach value  is less then middle value then move high at before of middle position.
		   {	high=mid-1;}
		   else         //if search value is high then move high at next of middle potsition.
		   {low=mid+1; }

	}while(low<=high);  //itrate loop until low is less then high or same.

        if(low>high)
        {
	 printf("variable not found");  //if low is greater then high then search value is absent.
        }

}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)  //loop for sorting.
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
