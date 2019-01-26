#include<stdio.h>
int main()
{
int a,d,sum=0;
scanf("%d",&a);
while(a>0)
{
d=a%10;
if(d%2!=0)
{
sum=sum+d;
}
a=a/10;
}
if(sum%2==0)
{
printf("E");
}
else 
{ 
printf("O");
}
return 0;
}
