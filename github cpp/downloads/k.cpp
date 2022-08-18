void create()
{
	temp=(struct node*)malloc(sizeof(struct node));
	int x;
	printf("enter data");
	scanf("%d",&x);
	temp->data=x;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		p=temp;
		temp=Null;

		}
	else
	{
		p->link=p;
		p=temp;
		}
}
