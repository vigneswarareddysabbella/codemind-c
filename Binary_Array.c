#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            x=0;
        }
        else
        {
            x=1;
        }
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}