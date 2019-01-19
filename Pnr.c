#include<stdio.h>
void main()
{
int P,T,R,si,value;
scanf("%d%d%d",&P,&T,&R);
si=(P*T*R)/100;
value=floor(si);
printf("%d",value);
return 0;
}
