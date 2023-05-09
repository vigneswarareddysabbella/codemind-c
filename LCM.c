#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
    {
    printf("%d",a*i);
    break;
    }
    }
}