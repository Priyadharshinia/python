#include<stdio.h>
int main()
{
int a[100],n,i,mi=a[0];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(mi>a[i])
{
mi=a[i];
}
}
printf("%d",mi);
return 0
}
