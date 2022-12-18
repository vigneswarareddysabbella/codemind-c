#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gs=bs+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}