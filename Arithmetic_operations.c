#include<stdio.h>
int main()
{
    int a,b,add,sub,mlt,div,rm;
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mlt=a*b;
    div=a/b;
    rm=a%b;
    printf("Sum:%d
",add);
    printf("Difference:%d
",sub);
    printf("Product:%d
",mlt);
    printf("Quotient:%d
",div);
    printf("Remainder:%d
",rm);
}