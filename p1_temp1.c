#include<stdio.h>
int main()
{
        long long int  n,x = 0,count=0,i;
        scanf("%lld",&n);
        for(i=1;x<=n;i+=2)
        {
            x = x + i;
            count++;
        }
        printf("%lld\n",count);
        return 0;
}