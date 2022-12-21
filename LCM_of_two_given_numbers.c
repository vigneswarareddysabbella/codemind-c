#include<stdio.h>
int main()
{
    int m,n,i,a;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(m*i%n==0)
        {
            a=i*m;
            break;
        }
    }
    printf("%d",a);
}