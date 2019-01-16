#include<stdio.h> 
int main()
{
int j,num,factorial=1;
scanf("%d",&num);
for(j=1;j<=num;j++)
{
factorial=factorial*j;
}
printf("%d",factorial);
return 0;
}
