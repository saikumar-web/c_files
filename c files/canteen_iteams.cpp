#include<stdio.h>
#include<stdlib.h>
struct canteen
{
	int iteam_no;
	char iteam_name[20];
};
int main()
{
	int i,key;
	struct canteen list[3];
	printf("\nenter the list of iteams\n");
	for(i=0;i<3;i++)
	{
		printf("enter the iteam number\n");
		scanf("%d",&list[i].iteam_no);
		printf("enter iteam name\n");
		scanf("%s",&list[i].iteam_name);
	}
	printf("enter the id number");
	scanf("%d",&key);
	for(i=0;i<3;i++)
	{
		if(list[i].iteam_no==key)
		{
			printf("%d",list[i].iteam_no);
			printf("\n%s",list[i].iteam_name);
			exit(0);
		}
		
	}
	printf("iteam not found");
	return 0;
}
