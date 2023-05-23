#include<stdio.h>
int main()
{
    int a,b,d=0,e,s,i;
    scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       s=i;
       d=0;
       while(s!=0)
       {
          e=s%10;
          d=d*10+e;
          s=s/10;
       }
       if(d==i)
       {
           printf("%d ",i);
       }
   }
}