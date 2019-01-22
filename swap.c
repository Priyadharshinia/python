#include<stdio.h>
int main()
{ 
int a,b,tem=0;
scanf("%d%d",&a,&b); 
tem=a;
a=b;
b=tem;
printf("%d %d",a,b);
return 0;
}
