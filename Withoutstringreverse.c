#include <stdio.h> 
#include<string.h>
int main(void)
{
char a[100];
int l,i=0,j,temp;
scanf("%s",a); 
l=strlen(a);
j=l-1;
while(i<j)
{
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  i++;
  j--;
 
}
printf("%s",a);
	return 0;
}
 
