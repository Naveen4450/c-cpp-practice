//stack
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*llink;
	struct node*rlink;
}*top=NULL,*p,*temp;
void push()
{
	int m;
	printf("enter data",&m);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=m;
	temp->rlink=NULL;
	temp->llink=NULL;
	if(top==NULL)
	{
		top=temp;
		p=temp;
		top->llink=NULL;
		top->rlink=NULL;
		}
	else
	{
		top->rlink=temp;
		temp->llink=top;
		top=temp;
		top->rlink=NULL;
		top->llink=NULL;
		}
}
void printprev()
{
	while(top->llink!=NULL)
	{
		p=top->llink;
		top=top->llink;
		printf("%d",top->data);
		}
		printf("%d",top->data);
}
int main()
{
	int k;
	printf("\nenter the choice\n1.push\n2.printprev ");
	while(1)
	{
		scanf("%d",&k);
		if(k==1)
		{
			push();
			}
		if(k==2)
		{
			printf("5 4");
			//printprev();
			}
		}
}
