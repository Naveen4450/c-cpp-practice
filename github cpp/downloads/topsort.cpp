#include<stdio.h>
int a[10][10],n,indegree[10];
void find(){
int i,j,sum;
for(j=0;i<n;j++)
{
sum=0;
for(i=0;i<n;i++)
sum+=a[i][j];
indegree[j]=sum;
}
}
void topology(){
int i,u,v,t[10],s[10],top=-1,k=0;
find();
for(i=0;i<n;i++){
if(indegree[i]==0)
s[++top]=i;
}
while(top!=-1){
u=s[top--];
t[k++]=u;
for(v=0;v<n;v++){
if(a[u][v]==1){
indegree[v]--;
if(indegree[v]==0)
s[++top]=v;

}
}
}
printf("the topollogical sequence is\n");
for(i=0;i<n;i++)
printf("%d",t[i]);
}
int main(){
int i,j;
printf("enter no of jobs");
scanf("%d",&n);
printf("enter the adjacency matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
topology();
}


