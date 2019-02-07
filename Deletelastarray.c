#include <stdio.h>
int main(void) 
{
int A[100],i,j,n,k;
scanf("%d%d",&n,&k); 
j=n-k;
for(i=0;i<n;i++) 
{ 
scanf("%d",&A[i]);
} 			
for(i=0;i<j;i++) 
{
printf("%d ",A[i]);
}
return 0;
}
 
