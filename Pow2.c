#include <stdio.h>
int main(void) 
{
int a,i,count=0;
scanf("%d",&a);  
for(i=1;i<=a;i++)
{ 
if(i*i==a) 
{ 
count++;
}
} 
if(count==1)
{ 
printf("yes");
} 
else 
{ 
printf("no");
}
	return 0;
} 
