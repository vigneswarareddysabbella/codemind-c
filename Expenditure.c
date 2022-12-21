#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=30*y;
    if(z<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}