#include<stdio.h>
int main()
{
    int n,h,m;
    scanf("%d",&n);
    h=n/60;
    m=n-h*60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}