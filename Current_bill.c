#include <stdio.h>
int main()
{
    float u,c,t;
    scanf("%f",&u);
    if(u<200)
    {
        c=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        c=u*1.50;
    }
    else if(u>=400 && u<600)
    {
        c=u*1.80;
    }
    else
    {
        c=u*2.00;
    }
    if(c>400)
    {
        t=c+c*0.15;
    }
    else
    {
        t=c+100;
    }
    printf("%0.2f",t);
}