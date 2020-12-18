#include<stdio.h>
#include<stdlib.h>
struct node mergetwo(struct node head,struct node start);
struct node
	{
		int data;
		struct node *next;
	}*nn,*pp,*mm,*ll,*newstart,*qq,*head,*start;
int main()
	{
		int i,n,t;
		printf("enter number of values in first");
		scanf("%d",&n);
		nn=(struct node*)malloc(sizeof(struct node));
		scanf("%d",nn->data);
		head=nn;
		pp=head;	
		for(i=1;i<n;i++)
			{
				nn=(struct node*)malloc(sizeof(struct node));
				scanf("%d",nn->data);
				pp=nn;
				pp=pp->next;
			}
	
		printf("enter number of values in second");
		scanf("%d",&t);
		nn=(struct node*)malloc(sizeof(struct node));
		scanf("%d",nn->data);
		start=nn;
		pp=start;	
		for(i=1;i<t;i++)
			{
				nn=(struct node*)malloc(sizeof(struct node));
				scanf("%d",nn->data);
				pp=nn;
				pp=pp->next;
			}

		if(head=NULL)
			{
				newstart=start;
			}
		else if(start=NULL)
				{
					newstart=head;
				}
				
		else 
			{	
			if(head->data<=start->data)
				{
					newstart=head;
					head=head->next;
				}
			else
			{	
			newstart=start;
			start=start->next;
			}
		ll=newstart;
		while(head!=NULL||start!=NULL)
			{
				if(head->data<=start->data)
					{
						ll->next=head;
						ll=ll->next;
					}
				else
					{	
						ll->next=start;
						ll=ll->next;
					}
			
			}
		}
	
	qq=newstart;
	while(qq->next!=NULL)
		{
			printf("%d",qq->data);
			qq=qq->next;
		}
	return 0;
}
	
