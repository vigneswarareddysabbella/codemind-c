#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c++;
    }
    if(c>=9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}