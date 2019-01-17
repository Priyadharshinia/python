#include<stdio.h>
int main()
{
int l,b,h,area,volume,x,y,z;
scanf("%d%d%d",&l,&b,&h);
x=l*b;
y=l*h;
z=b*h;
area=((2*x)+(2*y)+(2*z));
volume=(l*b*h);
printf("%d\t%d",area,volume);
return 0;
}
