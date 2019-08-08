#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    clrscr();
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);

    printf("Prime numbers are:-\n");
    for(i=2;i<=n;i++)
    {
	int c=0;
	for(j=1;j<=i;j++)
	{
	    if(i%j==0)
	    {
		c++;
	     //	printf("%d / %d\n",i,j);

	    }
	}

       if(c==2)
	{
	    printf("%d ",i);
	}
    }
    getch();
}