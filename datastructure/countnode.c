#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void count(struct node*ptr)
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
count(head);
}