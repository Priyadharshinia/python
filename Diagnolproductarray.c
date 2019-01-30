#include<stdio.h>
int main()
{
int a[10][10],i,j,N,product1=1,product2=1,sum;
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
product1=product1*a[i][j];
}}}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
if(i+j==N-1) 
{
product2=product2*a[i][j];
}}}
sum=product1+product2;
printf("%d",sum);
return 0;
}
