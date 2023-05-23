#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,z=0,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        z++;
        a=a/10;
        if(b%2==0&&b%2!=1)
        {
            c++;
        }
        else if(b%2!=0&&b%2==1)
        {
            d++;
        }
        if(b%2==0||b%2==1)
        {
            s++;
        }
    }
    if(c==z)
    {
        printf("Even");
    }
    else if(d==z)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}