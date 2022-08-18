//polynomial
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	int deg;
	struct node *link;
}*p=NULL,*first1=NULL,*first2=NULL,*first3=NULL,*t=NULL;
void poly1(int x);
void poly2(int x);
void addpoly(int x);
main()
{
	int x;
	printf("enter degree");
	scanf("%d",&x);
	poly1(x);
	poly2(x);
	
}
void poly1(int x)
{
	printf("enter polynomial 1\n");
	t=first1;
	while(x>=0)
	{
		if(t==NULL)
		{
			t=(struct node *)malloc(sizeof(struct node));
			int j;
			printf("enter coefficient of t^%d",x);
			scanf("%d",&j);
			t->data=j;
			t->deg=x;
			t->link=NULL;
			t=first1;
			}
		else
		{
			while(t->link!=NULL)
			{
				t=t->link;
				}
			p=(struct node*)malloc(sizeof(struct node));
			int r;
			printf("enter next term co-efficient");
			scanf("%d",&r);
			p->data=r;
			p->deg=x;
			p->link=NULL;
			t->link=p;	
			}	
			x--;
		}
}
void poly2(int x)
{
	printf("enter polynomial 2\n");
	t=first1;
	while(x>=0)
	{
		if(t==NULL)
		{
			t=(struct node*)malloc(sizeof(struct node));
			int j;
			printf("enter data in t^%d",x);
			scanf("%d",&j);
			t->data=j;
			t->deg=x;
			t->link=NULL;
			t=first1;
			}
		else
		{
			while(t->link!=NULL)
			{
				t=t->link;
				}
			p=(struct node*)malloc(sizeof(struct node));
			int r;
			printf("enter next term co-efficient");
			scanf("%d",&r);
			p->data=r;
			p->deg=x;
			p->link=NULL;
			t->link=p;	
			}	
			x--;
		}
}


