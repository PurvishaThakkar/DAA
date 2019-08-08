#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define infinity 9999
#define max 20
int g[max][max],spanning[max][max],n;
int prims();
int main()
{
	int i,j,total_cost;
	clrscr();
	printf("\nenter number of vertices : ");
	scanf("%d",&n);
	printf("\n enter the adjustcency matrix :\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter val[%d][%d] :",i+1,j+1);
			scanf("%d",&g[i][j]);

		}
	}

	total_cost=prims();
	printf("\n spannig tree matrix");
	for(i=0;i<n;i++)
	{
		printf("\n ");
		for(j=0;j<n;j++)
		{
			printf("\t %d\t",spanning[i][j]);
		}
	}
	printf("\n total cost of spanning tree is %d ",total_cost);

	getch();
	return 0;
}

int prims()
{
	int cost[max][max];
	int u,v,mean_distance,distance[max],from[max];
	int visited[max],number_of_edges,i,mean_cost,j;
	for(i=0;i<n;i++)
	{
		printf("\n ");
		for(j=0;j<n;j++)
		{
			if(g[i][j]==0)
			{
				cost[i][j]=infinity;
			}
			else
			{
				cost[i][j]=g[i][j];
				spanning[i][j]=0;
			}
		}
	}

	distance[0]=0;
	visited[0]=1;
	for(i=1;i<n;i++)
	{
	 distance[i]=cost[0][i];
	 from[i]=0;
	 visited[i]=0;
	}
	mean_cost=0;
	number_of_edges=n-1;
	while(number_of_edges>0)
	{
		mean_distance=infinity;
		for(i=1;i<n;i++)
		{
			if(visited[i]==0 && distance[i]<mean_distance)
			{
			 v=i;
			 mean_distance=distance[i];
			}

		}
	u=from[v];
	spanning[u][v]=distance[v];
	spanning[v][u]=distance[v];
	number_of_edges--;
	visited[v]=1;
	for(i=1;i<n;i++)
	{
		if(visited[i]==0 && cost[i][v]<distance[i])
		{
		distance[i]=cost[i][v];
		from[i]=v;
		}

	}
	mean_cost=mean_cost+cost[u][v];

	}
	return mean_cost;


}