#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        p=(a+b+c)-a;
    }
    else if(b<a && b<c)
    {
        p=(a+b+c)-b;
    }
    else if(c<a && c<b)
    {
        p=(a+b+c)-c;
    }
    printf("%d",p);
}