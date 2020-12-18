#include<stdio.h>
int main()
{
	char x[40];
	printf("enetr the line full of text");
	scanf("%[^\n]",x);
	printf("%s",x);
	return(0);
}
