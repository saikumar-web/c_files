#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void newnode_front();
void newnode_end();
void deletenode_front();
void deletenode_end();
void print_list();
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*front,*end;
int main()
{
	int n;
	while(1)
	{
		printf("enter the choice");
		printf("1.insert front\n2.insert end\n3.delete front\4.delete end\n5.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:newnode_front();
			break;
			case 2:newnode_end();
			break;
			case 3:deletenode_front();
			break;
			case 4:deletenode_end();
			break;
			case 5:print_list();
			break;
			case 6:exit(0);
			default:printf("\nenter valid choice\n");
		}
	}
	return 0;
}
void newnode_front()
{	
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&nn->data);
	if(head==NULL)
	{
		nn->next=NULL;
		nn->prev=NULL;
		head=nn;
		front=head;
		end=front;
	}
	else
	{
		nn->next=head;
		head->prev=nn;
		nn->prev=NULL;
		head=nn;
		front=head;
	}
	printf("the entered value is %d",nn->data);
}
void newnode_end()
{
			struct node *nn;
		nn=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&nn->data);
		if(head==NULL)
		{
			head=nn;
			nn->next=NULL;
			nn->prev=NULL;
		}
		else
		{
			end->next=nn;
			nn->prev=end;
			nn->next=NULL;
			end=nn;
		}
		printf("th entered value is %d",nn->data);
}
void deletenode_front()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else if(end==front)
	{
		printf("%d",front->data);
		end=front=head=NULL;
	}
	else
	{
		printf("%d",front->data);
		front=front->next;
		front->prev=NULL;
		head=front;
	}
}
void deletenode_end()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else if(end==front)
	{
		printf("%d",end->data);
		end=front=head=NULL;
	}
	else
	{
		printf("%d",end->data);
		end=end->prev;
		end->next=NULL;
	}
}
void print_list()
{
	while(front!=NULL)
	{
		printf("%d",front->data);
		front=front->next;
	}
	front=head;
}
