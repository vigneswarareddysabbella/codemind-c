#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    float avrg;
    avrg=(n1+n2)/2.0;
    printf("Average of %d and %d is: %0.2f",n1,n2,avrg);
}