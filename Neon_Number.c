#include<stdio.h>
int main()
{
    int n,m,sn,s=0,r;
    scanf("%d",&n);
    sn=n*n;
    m=sn;
    while(m!=0)
    {
        r=m%10;
        s=s+r;
        m=m/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}