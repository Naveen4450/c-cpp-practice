#include<stdio.h>
struct node
{
	int data;
	struct node* link;
}*first=NULL,*last=NULL,*p=NULL,*t=NULL;
main()
{
	printf("enter your choice\n1.insert\n2.delete\n3.display\n");
	int i,j,ch,x;
	void insert(int);
	void del(int); 
	while(1)
	{
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the element you wanna enter");
			       scanf("%d",&x);
			       insert(x);
			       break;
			case 2:printf("enter the element you wanna delete");
			   	   scanf("%d",&x);
				   del(x);
				   break;
			case 3:display();
			       break;
			case 0:exit();
			default:printf("enter the right choice"); 	   	         
			}
		}
}
void insert(int x)
{
	p=first;
	if(p==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->data=x;
		p->link=NULL;
		}
	else
	{
		while(p->link!=NULL)
		{
			p=p->link;
			if(p->link=NULL)
			{
				t=(struct node*)malloc(sizeof(struct node));
				t->data=x;
				p->link=t;
				t->data=NULL;
				}
			
			}
		}	
}
void delete(int x)
{
	while(p->link!=NULL)
	{
		p=p->link;
		if(p-)
		}
}
	
