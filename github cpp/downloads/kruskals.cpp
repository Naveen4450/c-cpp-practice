#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data1;
	int data2;
	struct node *llink;
	struct node *rlink;
}*start=NULL,*first=NULL,*fit=NULL,*p=NULL,*temp=NULL,*t1=NULL,*t2=NULL;
int  create()
{
	int n;
	printf("enter the cost of edge you wanna add");
	scanf("%d",&n);
	temp = (struct node*)malloc(sizeof(struct node));
	int c=0;
	if(p==NULL)
	{
		temp->data2=n;
		temp->data1=c;
		temp->llink=NULL;
		temp->rlink=NULL;
		start=p=temp;
		}
	else
	{
		temp->data1=++c;
		temp->data2=n;
		temp->llink=NULL;
		temp->rlink=NULL;
		int k;
		printf("enter the node position you wanna connect");
		scanf("%d",&k);
		p=start;
		while(p->data1!=k)
		{
			p=p->rlink;
			}
			p=p->rlink;
			p=t2;
			start=t1;
			t1->rlink=t2;
			t2->llink=t1;
		}
}
int spanning()
{
	p=start;
	while(p->rlink!=start)
	{
		p=fit;
		if(p->data2 > p->rlink->data2)
		{
			p=fit;
			printf("%d\t",p->data2);
			first=start;
			while(first->rlink!=fit)
			{
				first=first->rlink;
				}
				first->rlink=fit->rlink;
			}
			p=p->rlink;
			int o=3;
			while(o!=0)
			{
				spanning();
				
				}
			
		}
}
int main()
{
	while(1)
	{
		int h;
		printf("1.create\n2.spanning\n3.exit");
		printf("enter choice");
		scanf("%d",&h);
		if(h==1)
		{
			create();
			}
		if(h==2)
		{
			spanning();
			}
		if(h==3)
		{
			exit(0);
			}
		
		}
	
		
}
