#include<stdio.h>
int main()
{
int rev=0,r,d,n;
scanf("%d",&n);
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
while(rev!=0)
{
r=rev%10;
if(r%2!=0)
{
printf("%d ",r);
}
else
{
printf("");
}
rev=rev/10;
}
return 0;
}
