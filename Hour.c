#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,d,e,f,h,g;
scanf("%d%d",&a,&b);
scanf("%d%d",&c,&d);
e=a-c;
f=b-d;
h=abs(e);
g=abs(f);
printf("%d %d",h,g);
return 0;
}
