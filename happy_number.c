#include<stdio.h>
int main()
{
	int n,q,r,s=0;
	scanf("%d",&n);
	q=n;
	while(q>9)
	{
		s=0;
	while(q!=0)
	{
		r=q%10;
		s=s+r*r;
		q=q/10;		
	}
	if(s>9)
	{
		q=s;
	}

	}
	if(s==1||s==7)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	// printf("%d",s);
}