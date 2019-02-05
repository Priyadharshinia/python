#include <stdio.h>
int main(void) 
{
	char a[100];
    int count=0,i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++) 
{
    count++;
} 
printf("%d",count);
	return 0;
}
