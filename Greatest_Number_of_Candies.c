#include<stdio.h>
int main()
{
	int n,i,max=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	//printf("%d",max);
	int m;
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(arr[i]+m>=max)
	{
		printf("True ");
	}
	else
	{
		printf("False ");
	}
	}
	
}