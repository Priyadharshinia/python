#include<stdio.h>
int main()
{
int a[100],n,i,mini=a[0];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(mini>a[i])
{
mini=a[i];
}
}
printf("%d",mini);
return 0;
}
