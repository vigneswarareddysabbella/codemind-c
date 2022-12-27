#include<stdio.h>
int main()
{
    int n,i,r,a=0,d,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=i*i;
        s=s+r;
        a=a+i;
    }
    d=a*a-s;
    printf("%d",d);
}