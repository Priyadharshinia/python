#include<stdio.h>
int main()
{
int a[100],i,maxi=a[0],n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++) 
{
if(maxi<a[i]) 
{
maxi=a[i];
}
}
printf("%d",maxi); 
return 0;
}
