#include<stdio.h>
int main()
{
int A,N,D,term=0,sum=0,j;
scanf("%d%d%d",&N,&A,&D);
for(j=1;j<=N;j++)
{
term=A+(j-1)*D;
sum=sum+term;
}
printf("%d",sum);
return 0;
}
