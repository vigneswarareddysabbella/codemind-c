#include<stdio.h>
int main()
{
    int n,a,b,c,x;
    scanf("%d",&n);
    c=n/10;
    a=n%10;
    if(a%5==0)
    {
        x=c+(a/5);
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
}