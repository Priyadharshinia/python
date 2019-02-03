#include<stdio.h>
int main()
{
int a[10][10],i,j,n,m;
float avg,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
} 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
sum=sum+a[i][j];
}
} 
m=n*n;
avg=sum/m;
printf("%f",avg);
return 0;
}
