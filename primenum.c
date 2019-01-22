#include<stdio.h>
int main()
{
int a,count=0,i;
scanf("%d",&a);
for(i=1;i<=a;i++) 
{
if(a%i==0)
{
count++;
}
}
if(count==2)
{
printf("yes");
}
else 
{
printf("no");
}
return 0;
}
