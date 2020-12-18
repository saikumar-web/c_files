#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void comp(struct customers *nn,int n);
struct customers
{
			char name[20];
			int accountnumber;
			int balance;
};
int main()
{	
	struct customers customer[5]={													
										{"arun",160223417,89099},
                						{"karan", 1600145247,1000000},
              						  	{"priya",160002356,10000000},
            					    	{"raj",1600134526,9090000},
            					    	{"sai",1600132457,9000}
									};

	int low,high,mid;
	char key[20];
	printf("enter the name\n");
	scanf("%s",&key);
	low=0;
	high=5;
	
	while(low<=high)
	{	
	
		mid=(low+high)/2;
		if(strcmp(key,customer[mid].name)==0)
		{
			printf("coustemer is found at %d",mid+1);
			exit(0);
		}
		else if(strcmp(key,customer[mid].name)>>0)
		{
			
			low=mid+1;
		}
		else
		{
	
			high=mid-1;
		}
	}
	printf("customer not found");
	return 0;
}
