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
struct node *nn,*pp;
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
int n=0,pos,s;
printf("enter the position");
scanf("%d",&pos);
nn=head;
pp=head;
while(nn!=NULL)
{
	nn=nn->next;
	n++;
 } 
 for(s=0;s<(n-pos);s++)
 {
 	pp=pp->next;
 }
 printf("%d",pp->data);
return 0;
}


