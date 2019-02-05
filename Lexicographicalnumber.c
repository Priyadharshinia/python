#include <stdio.h>
int main(void)
 {
	char a[100];
  int t=0,k,j;
scanf("%s",a);
for(k=0;a[k]!='\0';k++)
{
for(j=k+1;a[j]!='\0';j++)
{
   if(a[k]>a[j])
{
     t=a[k];
     a[k]=a[j];
     a[j]=t;
}
}
} 
printf("%s",a);
	return 0;
}
