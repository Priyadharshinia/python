#include<stdio.h>
int main() 
{ 
int a[10][10],i,j,N,result,sum=0,sumplus=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{ 
if(i+j==N-1)
{
sumplus=sumplus+a[i][j];
}}}
result=sumplus*sum;
printf("%d",result);
return 0;
}
