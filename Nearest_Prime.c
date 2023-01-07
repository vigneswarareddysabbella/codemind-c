#include<stdio.h>
int is_prime(int);
int pre_prime(int);
int nex_prime(int);
int main()
{
	int k,n,a,b,i;
	scanf("%d",&k);
	for (i=1;i<=k;i++)
	{
	scanf("%d",&n);
	a= pre_prime(n);
	b= nex_prime(n);
	if ((n-a)<=(b-n))
	{
		printf("%d
",a);
		
	}
	else
	{
		printf("%d
",b);
	}
	}
}
int is_prime(int m)
{
		int	fc=0,i;
	for(i=1;i<=m;i++)
	{

		if(m%i==0)
		{
			fc=fc+1;			
		}
	}
	return fc==2;
}


int pre_prime(int n)
{
	while (is_prime(n) == 0)
	{
	n--;
	}
	return n;
}
int nex_prime(int n)
{
	while(is_prime(n)==0)
	{
		n++;
	}
	return n;
}