#include<stdio.h>
int main()
{
int a,b,c,d,e,f,h;
scanf("%d%d%d",&a,&b,&c);
d=c*c;
e=a*a;
f=b*b;
h=e+f;
if(d==h)
{
printf("yes");
}
else 
{
printf("no");
}
return 0;
}
