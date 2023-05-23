#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c,s=0,j,d;
        scanf("%d%d",&b,&c);
        for(j=b;j<=c;j++)
        {
            d=j%10;
            if(d==3||d==2||d==9)
            {
                s++;
            }
        }
        printf("%d
",s);
    }
}