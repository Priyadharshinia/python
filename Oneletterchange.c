#include <stdio.h>
int main(void)
 {
	char a[100],b[100];
int i,j,c=0;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++) 
{
  for(j=0;b[j]!='\0';j++)    
{ 
   if(a[i]==b[j]) 
    { 
    c++;
    }
}
} 
if(c>=1) 
{
printf("yes");
} 
else 
{ 
printf("no");
}
	return 0;
}
