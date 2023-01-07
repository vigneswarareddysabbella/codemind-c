#include<stdio.h>
int main()
{
int i,l,n,q,r,c=0,tc=0;
scanf("%d%d",&l,&n);
for(i=l;i<=n;i++)
{
q=i;
c=0;
tc=0;
while(q!=0)
{
	c=c+1;
	r=q%10;
	
	if(r!=0 && i%r==0)
	{
	tc=tc+1;
	 } 
	 
	 	q=q/10;
}

if(c==tc)
{
	printf("%d ",i);
}
}	
}