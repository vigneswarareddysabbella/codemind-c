
#include<stdio.h>
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}