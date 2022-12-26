#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void traverse(struct node*ptr)
{
	int count =0;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
		count++;
		printf("%d",count);
		
	}
}
	 struct node* insertatindex(struct node *head, int data,int index)
	 {
	 	struct node *ptr;
	 	ptr=(struct node*)malloc(sizeof(struct node));
	 	int i=0;
	 	struct node*p=head;
	 	while(i!=index-1)
	 	{
	 		p=p->next;
	 		i++;
		 }
		ptr->data=data;
	 	ptr->next=p->next;
	 	p->next=ptr;
	 	return ptr;
	 }
main()
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
 head=insertatindex(head,58,2);
 traverse(head);
}