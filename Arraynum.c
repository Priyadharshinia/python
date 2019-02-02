#include<stdio.h>
int main()
{
int a[100],n,k,i,count=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
} 
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
