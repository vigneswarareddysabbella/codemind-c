#include<stdio.h>
int main()
{
	int n,a=0,b=1,i;
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=1;i<n-1;i++)
	{
		int c;
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	
}