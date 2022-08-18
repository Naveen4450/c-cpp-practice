#include<stdio.h>
#include<stdlib.h>
void insert();
void deletepos();
void display();
struct node
{
	int data;
	struct node *link;
}*start=NULL,*p,*temp;
int main()
{
	int n=1;
	while(n)
	{
		printf("\nenter your choice\n1.insert\n2.deletepos\n3.display");
		int c;
		scanf("%d",&c);
		if(c==1)
		{
			insert();
			display();
			}
		if(c==2)
		{
			deletepos();
			display();
			}
		if(c==3)
		{
			display();
			}
		}
}
void insert()
{
	printf("\nenter the data:");
	int x;
	scanf("%d",&x);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		p=temp;
		}
	else
	{
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
			}
		p->link=temp;
		}
}
void deletepos()
{
	int n,c=0,i;
	printf("enter the position");
	scanf("%d",n);
	temp->link=NULL;
	if(start==NULL)
	{
		printf("no nodes");
		}
	else
	{
		p=start;
		while(p!=NULL)
		{
			c++;
			p=p->link;
			}
		if(c<n)
		{
			printf("not possible");
			}
		else
		{
			p=start;
			for(i=1;i<n-1;i++)
			{
				p=p->link;
				}
				p->link=(p->link->link);
			}
		}
}
void display()
{
	p=start;
	if(start==NULL)
	{
		printf("no elements");
		}
	else
	{
		while(p!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
			
			}
		}
	
}
