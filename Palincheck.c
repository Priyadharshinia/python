#include<stdio.h>
int main()
{
int n,s=0,rev=0,p,d,r;
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
s=p;
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
