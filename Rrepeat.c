#include <stdio.h>
int main(void) 
{
	char a[100];
int i,n,count=0,j;
   scanf("%s",a); 
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++) 
{ 
 
  if(a[i]==a[j]) 
{
  count++;
}
} }
if(count>=1)
{
 printf("yes");
}
else 
{
  printf("no");
}
	return 0;
}
