//prims
#include<stdio.h>
main()
{
	int n,i,j,no=0;
	printf("enter no of vertices");
	scanf("%d",&n);
	int g[n][n],mst[n][n];
	printf("enter the adjacency matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
			mst[i][j]=0;
			}
		}
		int s[n];
		for(i=0;i<n;i++)
		{
			s[i]=0;
			}
			int min,x,y;
			s[0]=1;
			while(no<n-1)
			{
				min=9999;
				x=0;
				y=0;
				for(i=0;i<n;i++)
				{
					if(s[i])
					{
						for(j=0;j<n;j++)
						{
							if(!s[j]&& g[i][j])
							{
								if(min>g[i][j])
								{							
								min=g[i][j];
								x=i;
								y=j;
								}
							}
						}
					}
				}
				
				s[y]=1;
				mst[x][y]=min;
				no=no+1;
				mst[y][x]=min;
            }
             printf("minimum spanning tree adjacency matrix");
             for(i=0;i<n;i++)
             {
					for(j=0;j<n;j++)
					{
						printf("%d",mst[i][j]);
						
						}
						printf("\n");
					}
 }

