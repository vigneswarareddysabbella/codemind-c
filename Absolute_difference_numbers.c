#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a,b,n1,n2,r,q,d,ad;
	scanf("%d%d",&n,&m);//
	n1=log10(n)+1;
	n2=n1-m;
	a=pow(10,m);
	b=pow(10,n2);
	r=n%a;
	q=n/b;
	d=r-q;
	ad=abs(d);
	printf("%d",ad);
		
}