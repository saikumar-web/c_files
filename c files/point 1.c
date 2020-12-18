#include<stdio.h>
int main()
{
	int a=10;
	float *p;
	p=&a;
	printf("a=%d",a);
	printf("\n&a=%u",&a);
	printf("\n &p=%u",&p);
	printf("\n *p=%f",*p);
	return 0;
}
