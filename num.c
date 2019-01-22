#include<stdio.h>
int main()
{
int n,rev=0,d,a;
scanf("%d",&n);
while(n!=0)
{ 
d=n%10;
rev=rev*10+d;
n=n/10;
}
while(rev>0)
{
a=rev%10;
printf("%d ",a);
rev=rev/10;
}
return 0;
}
