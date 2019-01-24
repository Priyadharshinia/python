#include<stdio.h>
#include<stdlib.h>
int main()
{
int long n,s=0,rev=0,d,r;
scanf("%ld",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
int p=s;
while(p!=0)
{
d=p%10;
rev=rev*10+d;
p=p/10;
}
if(s==rev)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
