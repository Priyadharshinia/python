#include<stdio.h>
int main()
{
int n,k,a[100],i,m;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i==m)
{
m=k-1;
printf("%d",a[i]);
}
}
return 0;
}
