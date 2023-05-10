#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c,d=0,s;
        scanf("%d",&b);
        s=b;
        while(b!=0)
        {
            c=b%10;
            d=d*10+c;
            b=b/10;
        }
        if(s==d)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}