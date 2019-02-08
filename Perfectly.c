#include <stdio.h>
int main(void) 
{ 
int a,b,pro,i,count=0;
scanf("%d%d",&a,&b); 
pro=a*b; 
for(i=1;i<=pro;i++) 
{ 
if(i*i==pro) 
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
