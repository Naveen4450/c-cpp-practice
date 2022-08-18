//linked list
#include<stdio.h>
struct node
{
	int data;
	struct node*link;
}*start=NULL,*temp,*p;
void create();
void display();
int main()
{
	int n=1;
	while(n)
	{
		printf("enter your choice\n1.create\n2.display\n3.exit");
		int ch;
		scanf("%d",&ch);
		if(ch==1)
		{
			create();
			}
		if(ch==2)
		{
			display();
			}
		if(ch==3)
		{
			exit();
			}
		}
	
}

void display()
{
	if(start==NULL)
	{
		printf("no elements");
		}
	else{
		while(p->link!=NULL)
		{
			printf("%d->",p);
			p=p->link;
			}
	}
}
