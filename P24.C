#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	 if(a==0)
	{
	printf("\n min is %d\t",a);
	printf("max is %d\t",b);
	}
	else if(b==0)
	{
	printf("\n min is %d\t",b);
	printf("max is %d\t",a);
	}
	else
	{
	c=abs(a/b);
	d=abs(b/a);
	if(d==0)
	{
	  printf("\n min is %d\t",b);
	  printf("max is %d\t",a);
	}

	else
	{
	  printf("\n min is %d\t",a);
	  printf("max is %d\t",b);
	}
	}
	getch();

}