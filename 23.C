#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,count=0;
	a=15,b=3;
	clrscr();
	if(a>b)
	{
		while(b<a)
		{
		b=b+1;
		count++;
		//printf("\n b:%d \t count:%d\n",b,count);
		}
	}
	printf("substraction is %d :",count);
	getch();


}