#include<stdio.h>
int main()
{
    int a,b,c=0,d,e=1;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        d=a%10;
        c=c+d;
        e=e*d;
         a=a/10;
    }
    if(e==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}