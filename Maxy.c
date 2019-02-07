#include <stdio.h>
int main(void)  
{ 
int a[100],i,m=a[0],n;  
scanf("%d",&n); 
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
}
for(i=0;i<n;i++) 
{
if(m<a[i]) 
{ 
m=a[i];
}
}
printf("%d",m);
return 0;
}
