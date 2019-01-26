#include<stdio.h>
int main()
{ 
int n,a[100],i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++) 
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++) 
{ 
j=i+1;
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j]; 
a[j]=t;
}} 
printf("%d",a[1]);
return 0;
}
