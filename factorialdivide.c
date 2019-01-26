#include<stdio.h>
int main()
{
int a,b,i,fact=1,fac=1,val; 
scanf("%d%d",&a,&b);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
for(i=1;i<=b;i++)
{
fac=fac*i;
}
val=fact/fac;
printf("%d",val);
return 0;
}
