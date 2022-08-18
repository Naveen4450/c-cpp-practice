//concatination of two linked lists
#include<stdio.h>
#include<stdlib.h>

	struct node
	{
		int data;
		struct node *link;
		}*start1=NULL,*start2=NULL,*p1,*p2,*start=NULL,*p,*temp1,*temp2,*temp;
void insert1()
{
	temp1=(struct node*)malloc(sizeof(struct node));
	int x,a,b,z,c;
	printf("enter data");
	scanf("%d",&x);
	temp1->data=x;
	temp1->link=NULL;
	if(start1==NULL)
	{
		start1=temp1;
		p1=temp1;
		temp1=NULL;
		}
	else
	{
		p1->link=p1;
		p1=temp;
		}
		
}
void insert2()
{
	temp2=(struct node*)malloc(sizeof(struct node));
	int x;
	printf("enter the element to be inserted");
	scanf("%d",x);
	temp2->data=x;
	temp2->link=NULL;
	if(start2==NULL)
	{
		start2=temp2;
		p2=temp2;
		temp2=NULL;
		}
	else
	{
		p2->link=p2;
		p2=temp;
	}
}
void display1()
{
	start1=p1;
	if(start1==NULL)
	{
		printf("no elements in list 1");
		}
	else
	{
		while(p1->link!=NULL)
		{
			printf("%d->",p1->data);
			p1=p1->link;
			}
		}
}
void display2()
{
	start2=p2;
	if(start2==NULL)
	{
		printf("no elements in list 2");
		}
	else
	{
		while(p2->link!=NULL)
		{
			printf("%d->",p2->data);
			p2=p2->link;
			}
		}
}
void concat()
{
	p=p1;
	start=p1;
	while(p->link!=NULL)
	{
		p=p->link;
		}
	p->link=p2;
	
}
void display()
{
	if(start==NULL)
	{
		printf("no data");
		}
	else
	{
		while(p->link!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
			}
		}
}
int main()
{
	int n;
	printf("The first linked list is");
	while(n!=999)
	{
		printf("\nfirstlinked list\n1.insert\n2.display");
		printf("\nif you enter 999 the linked list will be ended");
		printf("\nenter n");
		scanf("%d",&n);
		if(n==1)
		{
			insert1();
			}
		if(n==2)
		{
			display1();
			}
		if(n==3)
		{
			exit(0);
			}

			}
		

	int m;
	printf("\nthe second linked list");
	while(n!=999)
	{
		printf("enter m");
		scanf("%d",&m);
		if(m==1)
		{
			insert2();
			}
		if(m==2)
		{
			display2();
			}
			
		}
		concat();
		display();
}
