#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    b=0;
    for(i=1;i<=a;i++)
    {
        b=b+i;
    }
    printf("%d",b);
}