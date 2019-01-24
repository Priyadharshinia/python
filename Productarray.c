#include<stdio.h>
int main()
{
int a[100],n,i,pro=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
pro=pro*a[i];
}
if(pro%2==0)
{
printf("even");
}
else 
{
printf("odd");
}
return 0;
}
