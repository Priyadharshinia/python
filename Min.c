#include <stdio.h>
int main(void)
{
int a[100],mini=a[0],i; 
for(i=0;i<10;i++) 
{ 
scanf("%d",&a[i]);
}
for(i=0;i<10;i++) 
{  
  if(mini>a[i]) 
  { 
     mini=a[i];
  }
} 
printf("%d",mini);
	return 0;
}
