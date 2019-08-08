#include<stdio.h>
#include<conio.h>


void main()
{
	int n1,n2,result;
	clrscr();
	printf("n1 : ");
	scanf("%d",&n1);
	printf("n2 : ");
	scanf("%d",&n2);
	result=fun(n1,n2);
	printf("val1 %d * val2 %d = %d",n1,n2,result);
	getch();

}

int fun(int n1,int n2)
{
	if(n1<n2)
	{
		return fun(n2,n1);
	}
	else if(n2!=0)
	{
		return n1+fun(n1,n2-1);
	}
	else
	{
		return 0;
	}

}