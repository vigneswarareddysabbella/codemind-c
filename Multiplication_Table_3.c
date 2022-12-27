#include<stdio.h>
int main()
{
    int a,b,c,i,x;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        x=a*i;
        printf("%d x %d = %d
",a,i,x);
    }
}