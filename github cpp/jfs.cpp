#include<stdio.h>
#include<stdlib.h>
void insertend(int x);
void insertbeg(int);
void display();
struct node
{
	int data;
	struct node *link;
}*first=NULL,*p=NULL,*t=NULL;
main()
{
	int ch,x;
	printf("\n1.insertend\n2.insertbeg\n3.display");
	
	while(1)
	{
		printf("\nenter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the value you wanna insert in end");
			       scanf("%d",&x);
			       insertend(x);
			       break;
			case 2:printf("enter the value you wanna insert in beggining");
			       scanf("%d",&x);
				   insertbeg(x);
				   break;
			case 3:display();
			       break;
			case 4:return 0;
			default:printf("enter right choice");	   	         
			
			}
		}
}
void insertend(int x)
{
	p=first;
	if(p==NULL)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->data=x;
		p->link=NULL;
		}
	while(p!=NULL)
	{
		p=p->link;
		}	
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		p->link=t;
		t->link=NULL;
    
}
void insertbeg(int x)
{
	p=first;
	if(p==NULL)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->data=x;
		p->link=NULL;
		}
	while(p!=NULL)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		t->link=p;
		t=first;
		}	
}
void display()
{
	p=first;
	if(p==NULL)
	{
		printf("no elements in the list");
		}
	else
	{
		while(p!=NULL)
		{
			printf("%d\n",p->data);
			p=p->link;
			}
			printf("%d",p->data);
		}	
}
