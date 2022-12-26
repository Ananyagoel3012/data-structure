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
void main()
{
	struct node*head;
	struct node*first;
	head=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	head->data=200;
	head->next=first;
	first->data=90;
	first->next=NULL;
	traverse(head);
	
}