#include<stdio.h>
#include<conio.h>
int findpower(int a,int n)
{
	int mul=1,i;
	if(n==0)
	{
		return 1;
	}
	else
	{
		for(i=n;n>=1;n--)
		{
		 mul=a*mul;
		}
	}

}
void main()
{
	int x,n,r=1,c;
	clrscr();
	printf("enter x value :");
	scanf("%d",&x);
	printf("enter n value :");
	scanf("%d",&n);
	r=findpower(x,n);
	printf("%d^%d=%d",x,n,r);
	getch();


}