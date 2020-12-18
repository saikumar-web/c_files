#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i,n,l,m;
	printf("number of elements in the list");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		struct node *k_i=NULL;
		k_i=(struct node*)malloc(sizeof(struct node));
		scanf("%d",k_i->data);
	}

	k_n->next=NULL;
	struct node *k_l;
	k_l=(struct node*)malloc(sizeof(struct node));
	k_n->next=k_l;
	k_l->next=NULL;
		for(i=n;i>=n/2;i--)
	{
		l=i++;
		k_i->next=k_l;
	}
	m=n/2;
	struct node *point;
	point=(struct node*)malloc(sizeof(struct node));
	scanf("%d",point->data);
	point->next=k_m->next;
	k_m->next=point;
	return 0;
}
