#include<stdio.h>
#include<conio.h>
//using greedy algorithem  knecksek problem
void knapsack(int n,float  w[],float p[],float c);
void main()
{
	float w[50],p[50],c,temp,ratio[50];
	int n,i,j;

	clrscr();
	printf("\n enter number of item:\t");
	scanf("%d",&n);
	printf("enter weight and profit of each items............\n");
	for(i=0;i<n;i++)
	{

		printf("enter weight and profit : of item %d \t",i+1);


		scanf("%f %f",&w[i],&p[i]);

	}

	printf("\n enter the capasity of knapsak : ");
	scanf("%f",&c);
	printf("answer is...........................");
	for(i=0;i<n;i++)
	{
		ratio[i]=p[i]/w[i];

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ratio[i]<ratio[j])
			{
				temp=ratio[j];
				ratio[j]=ratio[i];
				ratio[i]=temp;

				temp=w[j];
				w[j]=w[i];
				w[i]=temp;

				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
	knapsack(n,w,p,c);
	getch();
}
void knapsack(int n,float w[50],float p[50],float c)
{
	float x[100],tp=0;
	int i,j,c1;
	c1=c;
	for(i=0;i<n;i++)
	{
		x[i]=0.0;

	}
	for(i=0;i<n;i++)
	{
	 printf("\t value of i :%d",i);
		if(w[i]>c1)
		{
			break;
		}
		else
		{
			x[i]=1.0;
			tp=tp+p[i];
			c1=c1-w[i];

		}


	}
	if(i<=n)
	{
	      //	x[i]=c1/w[i];
	      //	tp=tp+(x[i]*p[i]);
		for(i=0;i<n;i++)
		{
			printf("\nthe result vector is :");
			printf("\t %f",x[i]);
		}
		printf("\nmaximum profit is %f \t",tp);
	}


}