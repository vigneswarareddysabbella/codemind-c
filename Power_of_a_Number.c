#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int a,b;
      a=pow((x),y);
       b=a%m;
      printf("%d",b);
}