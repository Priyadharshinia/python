#include<stdio.h>
int main()
{
int a[100],b[200],i,n;
scanf("%d",&n);
for(i=0;i<n;i++) 
{
scanf("%d",&a[i]);
} 
for(i=0;i<n;i++) 
{
scanf("%d",&b[i]);
}  
for(i=0;i<n;i++) 
{
if(a[i]==b[i]) 
{ 
printf("%d ",a[i]);
} }
return 0;
}
