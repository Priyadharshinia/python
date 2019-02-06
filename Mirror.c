#include <stdio.h> 
int main(void) 
{
	int a[100],b[100],i,n,flag=0;
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
if(a[i]!=b[n-1-i]) 
{
  flag=1;
}
}
if(flag==0)
{
printf("yes");
} 
else
{
printf("no");
}
	return 0;
}
