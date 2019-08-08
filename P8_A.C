
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define max_size 10
void merge_sort(int,int);
void merge_array(int,int,int,int);
int array_sort[max_size];
int main()
{

	int i;

	 setbgcolor(WHITE);
	//clrscr();
	textcolor(RED);
 //	setbkcolor(WHITE);
	cprintf("enter %d elelments for sorting,\n",max_size);
	for(i=0;i<max_size;i++)
	{
	scanf("%d",&array_sort[i]);
	}
	cprintf("\n your data.......\n");
	for(i=0;i<max_size;i++)
	{
	cprintf("\t %d",array_sort[i]);
	}
	merge_sort(0,max_size-1);
	cprintf("\n sorted data\n ");
	for(i=0;i<max_size;i++)
	{
	cprintf(" \t %d",array_sort[i]);
	}

	getch();
       return 0;
}
void merge_sort(int i,int j)
{
	int m;
	if(i<j)
	{
		m=(i+j)/2;
		merge_sort(i,m);
		merge_sort(m+1,j);
		merge_array(i,m,m+1,j);
	}
}
void merge_array(int a,int b,int c,int d)
{
	int p[50];
	int i=a,j=c,k=0;

       /*	printf("\n your data  inside a merg_array()......\n");
	for(i=0;i<max_size;i++)
	{
	printf("\t %d",array_sort[i]);
	} */
	while(i<=b && j<=d)
	{
	    if(array_sort[i]<array_sort[j])
	    { p[k++]=array_sort[i++];

	    }
	    else
	    { p[k++]=array_sort[j++];}
	}
	while(i<=b)
	{
		p[k++]=array_sort[i++];

	}
	while(j<=d)
	{
		p[k++]=array_sort[j++];
	}
	for(i=a,j=0;i<=d;i++,j++)
	{
	array_sort[i]=p[j];
	}
}

