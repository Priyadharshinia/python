#include <stdio.h>
#include<ctype.h>
int main(void) 
{
char c[1000];
int i,count=0; 
scanf("%s",c);
for(i=0;c[i]!='\0';i++) 
{ 
if(isdigit(c[i]))
count++;
} 
printf("%d",count);
	return 0;
}
