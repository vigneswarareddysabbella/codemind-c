#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d",&a);
    i=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(i==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}