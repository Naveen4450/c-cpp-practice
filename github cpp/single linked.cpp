//linked list
#include<stdio.h>
#include<stdlib.h>
void insertend(int);
void insertbeg(int);
void display();
void insertpos(int,int);
void deleteend();
void deletebeg();
void deletepos(int);
void search(int);
int counting();
void sorting();
struct node
{
	int data;
	struct node *link;
}*p=NULL,*first=NULL,*t=NULL,*prev=NULL,*s=NULL,*del=NULL,*q=NULL;
main()
{
	int ch,x,pos,d;
	printf("enter the number you want to exegute\n1.insertend\n2.insertbeg\n3.display\n4.insert position\n5.delete end\n6.delete beggining\n7.delete position\n8.search\n9.count no of nodes\n10.sorting\n11.exit\n");
	while(1)
	{
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter element to be inserted");
			       scanf("%d",&x);
			       insertend(x);
			       break;
			case 2:printf("enter element to be inserted");
			       scanf("%d",&x);
			       insertbeg(x);
			       break; 
			case 3:display();
			       break;
			case 4:printf("enter position you want to insert");
			       scanf("%d",&pos);
			       printf("element you want to insert");
			       scanf("%d",&x);
			       insertpos(x,pos);
			       break;	
			case 5:deleteend();
			       break;
			case 6:deletebeg();
				   break;
			case 7:printf("enter position to be deleted");
			       scanf("%d",&pos);
			       deletepos(pos);
			       break;
			case 8:printf("enter element to be searched");
			       scanf("%d",&x);
			       search(x);
			       break;
			case 9:d=counting();
			       if(d==0)
				   {
						printf("no elements\n");
						}	   	   	   	      	
					else
					{
						printf("no of elements is %d\n",d);
						}	         
					break;
			case 10:sorting();
					break;
			case 11:return 0;
			default:printf("enter right choice\n");			
			
			}
		
		}
}
void insertend(int x)
{
	p=first;
	if(p==NULL)
	{
		t=(struct node*)malloc(sizeof(int));
		t->data=x;
		t->link=NULL;
		first=t;
		}
	else
	{	
	while(p->link!=NULL)
	{
		p=p->link;
		}
		t=(struct node*)malloc(sizeof(int));
		t->data=x;
		t->link=NULL;
		p->link=t;
			
}
}
void insertbeg(int x)
{
	t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	t->link=first;
	first=t;
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
		while(p->link!=NULL)
		{
			printf("%d",p->data);
			p=p->link;
			}
			printf("%d",p->data);
		}	
}
void insertpos(int x,int pos)
{
	int p,len=1;
	p=first;
	while(p->link!=NULL)
	{
		l++;
		p=p->link;
		}
	if(pos==1)
	{
		insertbeg(x);
		}	
	else if(pos>len)
	{
		insertend(x);
		}	
	else 
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		p=first;
		for(i=0;i<(pos-1);i++)
		{
			 
			}
				}	
}
