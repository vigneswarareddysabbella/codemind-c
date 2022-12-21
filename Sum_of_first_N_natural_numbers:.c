#include<stdio.h>
void sum(int n)
{
    int s;
    s=n*(n+1)/2;
    printf("%d",s);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}