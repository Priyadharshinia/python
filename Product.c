#include<stdio.h>
int main()
{
int r,n,pro=1;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
pro=pro*r;
n=n/10;
}
printf("%d",pro);
return 0;
}
