#include <stdio.h>
int main(void) 
{
int a[100],i,n,m,j;
scanf("%d%d",&n,&m); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&a[i]);
} 
for(i=0;i<n;i++) 
{
if(a[i]==m)    
{ 
j=i+1;
printf("%d",j);
}}
return 0;
}
