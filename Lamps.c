#include<stdio.h>
int main()
{
    int n,k,x,y,c;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k) 
    {
        c=n*x;
    }
    else
    {
        if((n-k)*y<(n-k)*x)
        {
            c=(n-k)*y+(k*x);
        }
        else
        {
            c=(n-k)*x+(k*x);
        }
    }
    printf("%d",c);
}