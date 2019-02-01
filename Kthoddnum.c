#include<stdio.h>
int main()
{
int n,k,i,a[100];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(a[k]%2==0) 
{
printf("%d",a[k-1]); 
}
else 
{
printf("%d",a[k]);
}
return 0;
}
