#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int m,n,x,y,i,j,a,b,c;
	clrscr();
	printf("enter n :");
	scanf("%d",&n);
	/*m=pow(n,2);
	printf(" m = %d",m);*/
	 printf("\n C^C = A^A + B^B");
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if((pow(i,2)+pow(j,2))==pow(n,2))
			{
			   a=pow(i,2);
			   b=pow(j,2);
			   c=pow(n,2);

			   printf("\n sqrt of %d*%d=%d   %d*%d=%d  %d*%d=%d",n,n,c,i,i,a,j,j,b);
			}
			else
			{
			   // printf(" sqrt ::: %d \t %d \t %d\n",n,i,j);

			}

	       }
	}
	getch();
}
