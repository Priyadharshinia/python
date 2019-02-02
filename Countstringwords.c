#include<stdio.h>
int main()
{
char ch[1000];
int count=0,i;
gets(ch);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==' ')
{
count++;
}
}
printf("%d",count+1);
return 0;
}
