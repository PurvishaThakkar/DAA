#include<stdio.h>
#include<conio.h>
#include<math.h>
long mul(long,long);
long  numberOfDigit(long,long);
void main()
{
	long n,m;
	clrscr();
	printf("enter two numbers :--- ");
	scanf("%ld %ld",&m,&n);
	printf("\n multiple of %ld nd %ld is %ld",m,n,mul(m,n));

	getch();

}
long  numberOfDigit(long m,long n)
{
	long max;
	int b=0;
	if(m>=n)
	{ max=m; }
	else
	{ max=n; }
	while(max>0)
	{
		max=max/10;
		b++;
	}
	return b;
}
long mul(long u,long v)
{
	long x,y,w,z;
	long m,n,p,q,r;
	printf("%ld %ld",u,v);
	n=numberOfDigit(u,v);
	printf(" n=%d ",n);

	if(u==0 || v==0)
	{   return 0; }
	else if(n<=2)
	{ return (u*v); }
	else
	{ m=floor(n/2);
	w=u/pow(10,m);
	x=u%(int)pow(10,m);
	y=v/pow(10,m);
	z=v%(int)pow(10,m);
	p=mul(w,y);
	q=mul(x,z);
	r=mul(w+x,y+z);
	return p*pow(10,2*m)+(r-p-q)*pow(10,m)+q; }

}