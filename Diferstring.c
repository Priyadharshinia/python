#include <stdio.h>
int main(void) 
{
	char a[100],b[100];
	int i,j,k,c=0;
	scanf("%s%s%d",a,b,&k);
	for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
	{
		if(a[i]!=b[j])
		{
		c++;
		}
	}
	if(c==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
