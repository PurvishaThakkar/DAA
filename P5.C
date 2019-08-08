#include<stdio.h>
#include<conio.h>
void main()
{       int x,n,ans=0;
	clrscr();
	printf("enter value of x :");
	scanf("%d",&x);
	printf("enter value of n :");
	scanf("%d",&n);
	ans=repetedSum(x,n);
	printf(" answer is %d",ans);
	getch();
}

int repetedSum(int x,int n)
{
	int i,tot=0;
	if(n==0)
		return 0;
	else
	 for(i=n;i>=1;i--)
	 {
		tot=x+tot;
	 }
	 return tot;


}