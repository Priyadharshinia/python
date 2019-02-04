#include <stdio.h>
int main(void) 
{
	int a[100],n,i,sum=0,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=a[i]|a[i+1];
		sum=sum|b;
	} 
	printf("%d",sum);
	return 0;
}
