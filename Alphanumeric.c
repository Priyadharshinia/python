#include<stdio.h> 
#include<ctype.h>
int main()
{
char a[50];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(isdigit(a[i]))
{
printf("%c",a[i]);
}
}
return 0;
}
