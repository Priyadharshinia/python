#include<stdio.h>
int main()
{
char a[100];
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='A'||a[i]=='E'||a[i]=='U'||a[i]=='O'||a[i]=='I'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
count++;
}
}
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
