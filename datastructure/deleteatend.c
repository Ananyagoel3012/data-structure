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
 struct node* delete_at_end(struct node*head)
 {
 	int i;
 	struct node*p=head;
 	struct node*q=head->next;
 	while(q->next!=NULL)
 	{
 	p=p->next;
	q=q->next;	
	 }
	 free(q);
	 p->next=NULL;
 	return head;
 	
 }

void main()
{
	struct node*head;
	struct node*first;
	struct node*second;
	struct node*third;
	head=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=20;
	head->next=first;
	first->data=50;
	first->next=second;
	second->data=120;
	second->next=third;
	third->data=150;
	third->next=NULL;
	printf("linklist element are\n");
	traverse(head);
	printf("link list element after deleting first node\n");
 head= delete_at_end(head);
 traverse(head);
}