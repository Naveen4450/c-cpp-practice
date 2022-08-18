//linked
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*start=NULL,*p,*q,*temp;
void create();
void delel();
void display();
int main()
{
	int n=1;
	while(n)
	{
		printf("\nenter the choice:\n1.create\n2.delete certain elemrnt\n3.display\n4.exit");
		int c;
		scanf("%d",&c);
		if(c==1)
		{
			create();
			display();
			}
		if(c==2)
		{
			delel();
			display();
			}
		if(c==3)
		{
			display();
			}
		}
}
void create()
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		p=temp;
		temp=NULL;
		}
	else
	{
		p->link=temp;
		p=temp;
		
		}	
}
void delel()
{
	int y;
	printf("enter the element u wanna delete");
	scanf("%d",&y);
	p=start,q=start;
	while(p->link!=NULL)
	{
		if(p->data=y)
		{
			temp=p;
			}
			p=p->link;
		}
	while(q->link!=temp)
	{
		q->link=q->link->link;
		}
		temp=NULL;
		free(temp);
}
void display()
{
	p=start;
	while(p->link!=NULL)
	{
		printf("%d->",p);
		p=p->link;
		}
}
