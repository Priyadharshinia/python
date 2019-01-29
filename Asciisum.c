#include<stdio.h>
int main()
{
char a[100];
int sum=0,i,l;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if((a[i]>='a'&&a[i]<='z'))
{
sum=sum+a[i];
}}
printf("%d",sum);
return 0;
}
