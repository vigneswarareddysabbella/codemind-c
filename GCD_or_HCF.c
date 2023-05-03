#include<stdio.h>
int main()
{
    int l,b,i,c;
    scanf("%d%d",&l,&b);
    for(i=1;i<=l&&i<=b;i++)
    {
        if(l%i==0&&b%i==0)
        {
           c=i;
        }
    }
     printf("%d",c);
}