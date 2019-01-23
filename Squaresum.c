#include<stdio.h>
int main()
{
int r,sum=0,n;
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r*r;
n=n/10;
}
printf("%d",sum);
return 0;
}
