#include<stdio.h>
#include<limits.h>
#define INFY 9999
long int m[20][20];
int s[20][20];
int p[20],i,j,n;
void print_optimal(int i,int j)
{
	if(i==j)
	{
	printf("a %d",i);
	}
	else
	{
	printf(" ( ");
	print_optimal(i,s[i][j]);
	print_optimal(s[i][j+1],j);
	printf(" ) ");
	}
}
void multiply(void)
{
	long int q;
	int k;
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			if(i==j)
			{
			m[i][j]=0;
			}
			else
			{
				for(k=i;k<j;k++)
				{
					q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
					if(q<m[i][j])
					{
					m[i][j]=q;
					s[i][j]=k;

					}
				}
			}
		}
	}
}
int matrix_order(int p[],int i,int j)
{
	int k;
	int min = INT_MAX;
	int count;
	if(i==j)
	{

	}
	for(k=i;k<j;k++)
	{
		count=matrix_order(p,i,k)+matrix_order(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
		{
		 min=count;
		}
	}
	return min;
}
void main()
{

	int k;
	clrscr();
	printf("enter the no of element");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			m[i][i]=0;
			m[i][j]=INFY;
			s[i][j]=0;

		}
	}
	printf("enter the dimension :");
	for(k=0;k<=n;k++)
	{
		printf("P[%d]",k);
		scanf("%d",&p[k]);
	}

	multiply();
	printf("cost matrix M \n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
		printf("m[%d][%d]: %ld \n",i,j,m[i][j]);
		}
	}


	  i=1,j=n;
	  printf("multiplicatiin sequence");
	  print_optimal(i,j);
	  printf("minimum number of multiplication is %d",matrix_order(p,1,n));
	  getch();
}
