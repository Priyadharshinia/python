#include<stdio.h>
int main()
{
int a[50][50],N,i,j,sum=0;
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
if(i+j==N-1)
{
sum=sum+a[i][j];
}
}
}
printf("%d",sum);
return 0;
}
