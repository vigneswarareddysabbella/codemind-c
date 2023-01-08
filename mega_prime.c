#include<stdio.h>
#include<math.h>
int is_prime(int);
int megaprime(int);
int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n))
	{
		if(megaprime(n))
		{
			printf("Mega Prime");
		}
		else
		{
			printf("Not Mega Prime");
		}
		
	}
	else
	{
		printf("Not Mega Prime");
	}
	
}
int is_prime(int m)
{
		int	fc=0;
	for(int i=1;i<=m;i++)
	{

		if(m%i==0)
		{
			fc=fc+1;			
		}
	}
	return fc==2;
}
int megaprime(int m)
{
	int r,q,c=0,x;
	x=(int) log10(m)+1;

	q=m;
	while(q!=0)
	{
	r=q%10;
	int	fc=0;
	for(int i=1;i<=r;i++)
	{
		if(r%i==0)
				{
			fc=fc+1;			
		}
	}
	if(fc==2)
	{
		c=c+1;
	}
	q=q/10;
	}
	
	return x==c;
}