#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c,d=0;
        scanf("%d%d",&b,&c);
        d=b+c;
        printf("%d
",d);
    }
}