#include<stdio.h>
#include<conio.h>
int findpower(int a,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return a*findpower(a,n-1);
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