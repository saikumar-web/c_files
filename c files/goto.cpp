#include<stdio.h>
int main()
{
	int a,b,c=0,i=0,n,r;
	scanf("%d",&n);
	XYZ:
		scanf("%d%d",&a,&b);
		c=c+(a+b);
		i=i+1;
	if(i<(n/2))goto XYZ;
	r=c/n;
	printf("%d,%d",r,c);
	return(0);
}
