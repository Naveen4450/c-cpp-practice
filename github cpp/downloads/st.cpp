//stacks as linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL,*p,*temp;
void push();
void pop();
void display();
int main()
{
	int n=1;
	while(n)
	{
		printf("\nenter the number you want\n1.push\n2.pop\n3.display\n4.exit\n");
		int c;
		scanf("%d",&c);
		if(c==1)
		{
			push();
			display();
			}
		if(c==2)
		{
			pop();
			display();
			}
		if(c==3)
		{
			display();
			}
		if(c==4)
		{
			exit(0);
			}
		}
}
void push()
{
	int x;
	printf("enter the data to push");
	scanf("%d",&x);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(top==NULL)
	{
		top=temp;
		}
	else
	{
		temp->next=top;
		top=temp;
		}
}
void pop()
{
	p=top;
	if(top==NULL)
	{
		printf("there are no elements in stack");
		}
		while(p->next->next!=NULL)	
			p=p->next;
			temp=p->next;
			p->next=NULL;
			free(temp);
}
void display()
{
	if(top==NULL)
		printf("no nodes\n\n");
	else
	{
		p=top;
		while(p!=NULL)
		{
			printf("%d->",p->data);
			p=p->next;
		}
		printf("\n\n");
}}
