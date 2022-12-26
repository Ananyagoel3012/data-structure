#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void traverse(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
	 struct node* insert_at_end(struct node *head, int data)
	 {
	 	struct node *ptr;
	 	ptr=(struct node*)malloc(sizeof(struct node));
	 	ptr->data=data;
	 	struct node*p=head;
	 	while(p->next!=NULL)
	 	{
        p=p->next; 	
		 }
	 	p->data=data;
	 	p->next=NULL;
	 	return head;
	 }

int main()
{
	struct node*head;
	struct node*first;
	struct node*second;
	struct node*third;
/* allocation of memory*/
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
/* link first second node*/
head->data=20;
head->next=first;
first->data=50;
first->next=second;
second->data=100;
second->next=third;
third->data=200;
third->next=NULL;
 head = insert_at_end(head,54);
 traverse(head);
}