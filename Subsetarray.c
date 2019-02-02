#include<stdio.h>
int main()
{
int a,b,c[100],d[100],j,i,count=0;
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
for(j=0;j<b;j++)
{
scanf("%d",&d[j]);
}
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(c[i]==d[j])
{
count++;
}
}}
if(count==b)
{
printf("yes");
}
else 
{
printf("NO");
}
return 0;
}
