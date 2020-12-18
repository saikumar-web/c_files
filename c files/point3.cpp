#include<stdio.h>
int main()
{
	int n=23,m=26;
	const int *p=&n;
	
	printf("*p=%d",p);
	p=&m;
	printf("*p=%d",p);
	return 0;
}
