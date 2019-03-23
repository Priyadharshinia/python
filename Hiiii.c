#include<stdio.h>
int main(void) 
{
	int n,i,c=0,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		   if(a[j]>a[i])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++) 
{ 
if(a[i]==0)
{
	c++;
} }

	if(c==n)
	{
		printf("0");
	}
    else
    {
        for(i=0;i<n;i++)	
        {
        	printf("%d",a[i]);
        }
    }
	return 0;
	}
