#include<stdio.h>
int main()
{
	int n,q,r,s=0;
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		r=q%10;
		s=s*10+r;
		q=q/10;		
	}
	printf("%d",s);
}