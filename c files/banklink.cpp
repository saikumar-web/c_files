#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
struct node* middle(node* start, node* last) ;
struct node
{
	int id;
	char name[20];
	float amount;
	struct node *next;
}*head=NULL,*front=NULL;
int main()
{
	int n,l=0,s,i;
	char key[20];
	printf("enter number of customers\n");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("\nenter details of customer\n");
		l++;
		struct node *nn=(struct node*)malloc(sizeof(struct node));
		printf("id=");
		scanf("%d",&nn->id);
		printf("\nname=");
		scanf("%s",&nn->name);
		printf("\namount=");
		scanf("%f",&nn->amount);
		front=head;
		if(head==NULL)
		{
			head=nn;
			nn->next=NULL;
		}
		else
		{
			while(front->next!=NULL)
			{
				front=front->next;
			}
			front->next=nn;
			nn->next=NULL;
		}
		n--;
	}
	printf("\nenter the key element\n");
	scanf("%s",&key);
    struct node* start = head; 
    struct node* last = NULL; 
  
    do
    { 
        // Find middle 
        struct node* mid = middle(start, last); 
  
        // If middle is empty 
        if (mid == NULL) 
             printf("no list");
        // If value is present at middle 
        if (strcmp(key,mid->name)==0) 
        {
			 printf("iteam is found");
			 printf("\n%d",mid->id);
			 printf("\n%s",mid->name);
			 printf("\n%f",mid->amount);
            exit(0);
            
  
  		}
        // If value is more than mid 
        else if (strcmp(key,mid->name)>>0) 
            start = mid -> next; 
  
        // If the value is less than mid. 
        else
            last = mid; 
  
    } while (last == NULL || 
             last != start); 
  
    // value not present 
    printf("no element is fount");
    return 0;
} 
struct node* middle(node* start, node* last) 
{ 
    if (start == NULL) 
        return NULL; 
  
    struct node* slow = start; 
    struct node* fast = start -> next; 
  
    while (fast != last) 
    { 
        fast = fast -> next; 
        if (fast != last) 
        { 
            slow = slow -> next; 
            fast = fast -> next; 
        } 
    } 
  
    return slow; 
}


   
