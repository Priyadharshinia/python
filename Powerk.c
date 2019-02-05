#include <stdio.h>
int main(void)
 {
int n,k,i,count=0;
	scanf("%d%d",&n,&k);
  for(i=1;i<n;i++) 
{
    if(pow(k,i)==n)  
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
