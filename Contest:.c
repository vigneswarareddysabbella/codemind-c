#include<stdio.h>
int main()
{
    int x,a,b,z;
    scanf("%d%d%d",&x,&a,&b);
    z=(a*1)+(b*2);
    if(z>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}