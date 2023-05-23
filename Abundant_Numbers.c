#include<stdio.h>
int main()
{
    int a,i,d=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            d=d+i;
        }
    }
    if(d>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}