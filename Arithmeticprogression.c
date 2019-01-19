#include<stdio.h>
int main()
{
int A,N,D,t=0,sum=0,i;
scanf("%d%d%d",N,&A,&D);
for(i=1;i<=N;i++)
{
t=A+(i-1)*D;
sum=sum+t;
}
printf("%d",sum);
return 0;
}
