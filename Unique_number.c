#include<stdio.h>
#include<math.h>
int main()
{
	int n,q,m,l;
	scanf("%d",&n);
	m=log10(n)+1;
	q=n;
	int arr[m],i,j,cnt=0;
	i=0;
	while(q!=0)
	{
		//i=0;
		int r;
		r=q%10;
		arr[i]=r;
		q=q/10;
		i++;
		//printf("%d",arr[i]);
	}
		
	for(i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					cnt++;
				}
			}
		}
	}
	if(cnt==0)
	{
		printf("Unique Number");
	}
	else
	{
		printf("Not Unique Number");
	}
	
}