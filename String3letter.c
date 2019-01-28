#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int l,i;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i+=3)
{
printf("%c",a[i]);
}
return 0;
}
