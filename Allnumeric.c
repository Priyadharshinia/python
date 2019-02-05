#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
int i,count=0,k;
scanf("%s",a);
k=strlen(a);
for (i=0;a[i]!='\0';i++)
{
    if(isdigit(a[i]))
    {
     count++;
    }
} 
if(count==k) 
{
   printf("yes");
} 
else 
{
   printf("no");
}
	return 0;
}
