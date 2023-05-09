#include<stdio.h>
int main()
{
    int n,m,a,i,e=1,t=0;
    scanf("%d", &n);
    m=n;
    while(m!=0)
    {
        e=1;
       a=m%10;
       m=m/10;
       for(i=a;i>0;i--)
       {
           e=e*i;
           
       }
       t=t+e;
    }
    if(t==n)
    {
        printf("The number %d is a strong number", n);
    }
    else
    {
        printf("The number %d is not a strong number", n);
    }
}