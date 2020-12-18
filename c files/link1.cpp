struct node{
	int data;
	struct node *next;
};
#include<stdio.h>
#include<stdlib.h>
int main()
{int x,y,z;
	
struct node *head;
head=NULL;
struct node *one;
struct node *two;
struct node *three;

one=(struct node*)malloc(sizeof(struct node));
scanf("%d",&one->data);
two=(struct node*)malloc(sizeof(struct node));
scanf("%d",&two->data);
three=(struct node*)malloc(sizeof(struct node));
scanf("%d",&three->data);

one->next=head;
x=one->data;
y=two->data;
z=three->data;
head=one;
head->next=two;
two->next=three;
three->next=NULL;

printf("%d,%d,%d",x,y,z);
return 0;
}


