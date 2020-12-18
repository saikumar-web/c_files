#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("\n enter the character");
	ch=getchar();
	ch=toupper(ch);//converts the lowercase letter to uppercase//
	switch(ch)
	{
		case'R':printf("red");break;
		case'G':printf("green");break;
		case'B':printf("blue");break;
		default:printf("invaled character");
	}
}
