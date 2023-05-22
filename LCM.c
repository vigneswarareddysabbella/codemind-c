#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(m*i%n==0)
        {
            printf("%d",m*i);
            break;
        }
    }
}