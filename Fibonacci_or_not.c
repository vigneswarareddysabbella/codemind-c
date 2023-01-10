#include<stdio.h>
int main()
{
	int n,m,a=0,b=1,i,cnt=0;
	//scanf("%d",&m);
	scanf("%d",&n);
	//printf("%d %d",a,b);
	for(i=1;i<n+1;i++)
	{
		int c;
		c=a+b;
		//printf(" %d",c);
		if(c==n)
		{
			cnt++;
			break;
		}
		a=b;
		b=c;
	}
	if(cnt==0)
	{
		printf("False");
	}
    else
	{
		printf("True");
	}
	
}