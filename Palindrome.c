#include<stdio.h> 
#include<string.h>
int main()
{
char s1[100],s2[100];
scanf("%s",s1);
strcpy(s2,s1);
strrev(s2);
if(strcmp(s1,s2)==0)
{
printf("yes");
}
else 
{
printf("no");
}
return 0;
}
