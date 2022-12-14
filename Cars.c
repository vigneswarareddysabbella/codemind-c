#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    if(n%4==0)
    {
        c=n/4;
    }
    else 
    {
        c=(n/4)+1;
    }
    printf("%d",c);
}