#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b,c;
    scanf("%d%d",&a,&c);
    for(i=1;i<=c;i++)
    {
        if(i%2==1)
        {
            b=a*i;
        printf("%d x %d = %d
",a,i,b);
        }
    }
}