//rod cutting problem
#include<stdio.h>
#include<conio.h>
int max(int a ,int b)
{
	return(a>b ? a :b);
}
int cutrod(int price[],int length)
{
	int i,max_value=0;
	if(length<=0)
	{
		return  0;
	}
	for(i=0;i<length;i++)
	{
		max_value=max(max_value,price[i]+cutrod(price,length-i-1));
		printf("max(%d,\t%d(price[%d]) + cutrod(%d,%d-%d-1)\n",max_value,price[i],i,price,length,i);
	      //	return max_value;
	}
	return max_value;
}
void main()
{
	int i,result,length,price[100];
	clrscr();
	printf("\nEnter Length of rod:");
	scanf("%d",&length);
	for(i=0;i<length;i++)
	{
		printf("\nEnter Price of Length %d :",i+1);
		scanf("%d",&price[i]);
	}
	result=cutrod(price,length);
	printf("\nThe Maximum price of: %d",result);
	getch();
}
