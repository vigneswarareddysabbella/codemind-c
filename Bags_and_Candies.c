#include<stdio.h>
int main()
{
    int n,k,m,a;
    scanf("%d%d%d",&n,&k,&m);
    if(n%(k*m)==0)
    {
        a=n/(k*m);
    }
    else
    {
        a=n/(k*m)+1;
    }
    printf("%d",a);
}