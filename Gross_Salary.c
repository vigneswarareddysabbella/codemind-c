#include<stdio.h>
int main()
{
    float b,d,h,g;
    scanf("%f",&b);
    if(b<=10000)
    {
        d=0.8*b;
        h=0.2*b;
    }
    else if(b<=20000)
    {
        d=0.9*b;
        h=0.25*b;
    }
    else
    {
        d=0.95*b;
        h=0.3*b;
    }
    g=b+d+h;
    printf("%0.2f",g);
}