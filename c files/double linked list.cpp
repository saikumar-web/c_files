#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("enter number of nodes needed");
	scanf("%d",&n);
	struct node *head;
	struct node *nn;
	struct node *pp;
	nn=(struct node*)malloc(sizeof(struct node));
	scanf("%d",nn->data);
	head=nn;
	pp=nn;
	head->prev=NULL;
	for(i=1;i<(n-1);i++)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		scanf("%d",nn->data);
		nn->prev=pp;
		pp->next=nn;
		pp=nn;
		
	}
	nn->next=NULL;
	free(pp);
	pp=head;
	while((pp->next)!=NULL)
	{
		printf("%d",pp->data);
		pp=pp->next;
	}
	return 0;
	
}
struct node
{
	int data;
	int struct node *next;
	int struct node *prev;
};
