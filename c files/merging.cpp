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
				nn=(struct node*)malloc(sizeof(struct node));
				ll=start;
				newstart=nn;
				nn->data=start->data;
				pp=newstart;
				ll=ll->next;
				while(ll->next!=NULL)
					{
						nn=(struct node*)malloc(sizeof(struct node));
						nn->data=ll->data;
						ll=ll->next;
						pp->next=nn;
						pp=pp->next;
					}
			}
		else if(start=NULL)
				{
					nn=(struct node*)malloc(sizeof(struct node));
					ll=head;
					newstart=nn;
					nn->data=head->data;
					pp=newstart;
					ll=ll->next;
					while(ll->next!=NULL)
						{
							nn=(struct node*)malloc(sizeof(struct node));
							nn->data=ll->data;
							ll=ll->next;
							pp->next=nn;
							pp=pp->next;
						}
				}
	else if(start!=NULL&&head!=NULL)
		{	
			mm=start;
			ll=head;
			if(head->data<=start->data)
				{
					nn=(struct node*)malloc(sizeof(struct node));
					nn->data=head->data;
					newstart=nn;
					pp=nn;
					pp=pp->next;
					ll=ll->next;
					qq=newstart;
				}
			else
			{	nn=(struct node*)malloc(sizeof(struct node));
				nn->data=start->data;
				newstart=nn;
				pp=nn;
				pp=pp->next;
				mm=mm->next;
				qq=newstart;
				
			}
		
		while(mm->next!=NULL||ll->next!=NULL)
			{
				if(ll->data<=mm->data)
					{
					nn=(struct node*)malloc(sizeof(struct node));
					nn->data=ll->data;
					qq->next=nn;
					qq=qq->next;
					ll=ll->next;
					}
				else
					{	
					nn=(struct node*)malloc(sizeof(struct node));
					nn->data=mm->data;
					qq->next=nn;
					qq=qq->next;
					mm=mm->next;
						
					}
			
			}
		}
	
	qq=NULL;
	nn=newstart;
	while(newstart!=NULL)
		{
			printf("%d",nn->data);
			newstart=newstart->next;
		}
		
}
	
