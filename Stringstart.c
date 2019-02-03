#include<stdio.h>
#include<string.h>
int main()
{
char a[100],i;
int n,l,d;
scanf("%s",a);
scanf("%d",&n);
l=strlen(a);
d=l-n;
for(i=d;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
return 0;
}
