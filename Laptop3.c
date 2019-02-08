#include <stdio.h>
int main(void) 
{
char a[100];
int n,i,j;
scanf("%s%d",a,&n);
for(j=0;j<n;j++) 
{  
	for(i=0;a[i]!='\0';i++)
	{
     printf("%c",a[i]);
    } 
    printf("\n");
}
	return 0;
}
