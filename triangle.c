#include<stdio.h>
int main()
{
int a,b,h,val; 
float c;
scanf("%d%d",&b,&h); 
a=b*h;
c=0.5*a;
val=floor(c);
printf("%d",val);
return 0;
}
