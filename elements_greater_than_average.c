#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avrg,c=0;
    avrg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avrg)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}