
#include<stdio.h>
int main()
{
    int b,i,s,r,lar,a,k,l=0;
    scanf("%d",&a);
    for(b=a+1;b>0;b++)
    {
        i=b;
        s=0;
        l=0;
        for(k=1;k<=b;k++)
        {
            if(b%k==0)
            {
                l++;
            }
        }
        if(l==2)
        {
            while(i!=0)
            {
                r=i%10;
                s=s*10+r;
                i=i/10;
            }
            if(s==b)
            {
                lar=s;
                printf("%d",lar);
                break;
            }
        }
    }
}