#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    int c=a*a;
    while(c!=0)
    {
        i=c%10;
        b=b+i;
        c=c/10;
    }
    if(a==b)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}