#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j,a=1;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            a=a*j;
        }
        printf("%d
",a);
    }
}