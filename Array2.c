#include<stdio.h>
int main()
{
int a[100],n,k,j,count=0,i;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(k==a[i]+a[j])
{
count++;
}
}
}
if(count>=1) 
{
printf("YES");
}
else 
{
printf ("NO");
}
return 0;
}
