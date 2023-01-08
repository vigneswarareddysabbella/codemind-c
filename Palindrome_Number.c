#include<stdio.h>
int is_palndrm(int);
int main()
{
	int n,nm,i;
	scanf("%d",&nm);
	for(i=1;i<=nm;i++)
	{
	scanf("%d",&n);
	//printf("%d",is_palndrm(n));
	if(is_palndrm(n))
	{
		printf("True
");
	}
	else
	{
		printf("False
");
	}
	}
	
}
int is_palndrm(int m)
{
	int q,r,s=0;
		q=m;
	while(q!=0)
	{
		r=q%10;
		s=s*10+r;
		q=q/10;	
	}
	if(m==s)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}