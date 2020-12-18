#include<stdio.h>
int main()
{
	int a=1055;
	int *p;
	p=&a;
	printf("p+1=%d",p+1);
	printf("\p-1=%d",p-1);
	printf("\n p++=%d",*p++);
	printf("\n --p=%d",*++p);
	return 0;
}

