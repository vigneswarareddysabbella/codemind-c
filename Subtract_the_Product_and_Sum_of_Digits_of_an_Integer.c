#include<stdio.h>
int main()
{
    int n,r,p=1,a=0,res,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
      r=q%10;
      p=p*r;
      a=a+r;
      q=q/10;
    }
    res=p-a;
    printf("%d",res);
}