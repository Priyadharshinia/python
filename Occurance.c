#include<stdio.h>
int main()
{
int long a;
int b,c,count=0;
scanf("%ld",&a);
scanf("%d",&b);
while(a>0)
{
c=a%10;
if(c==b)
{
count++;
}
a=a/10;
}
printf("%d",count);
return 0;
}
