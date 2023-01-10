#include<stdio.h>
int main()
{
    int n,i,op;
    op=0;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        op=op+i;
    }
    printf("%d",op);
}