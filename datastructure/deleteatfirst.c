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
 struct node* delete_at_first(struct node*head)
 {
 	struct node*ptr=head;
 	head=head->next;
 	free(ptr);
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
head=delete_at_first(head);
traverse(head);
}