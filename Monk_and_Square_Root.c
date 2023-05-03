#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        long int n,m,k,c=0,j;
        scanf("%ld%ld",&n,&m);
        for(j=0;j<n||j<m;j++)
        {
            k=j*j;
            if(k%m==n)
            {
                printf("%ld
",j);
                c++;
                break;
            }
        }
    if(c==0)
    {
        printf("-1
");
    }
    }
}
