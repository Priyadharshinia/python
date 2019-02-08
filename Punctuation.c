#include<stdio.h> 
#include<ctype.h>
int main(void) 
{ 
char a[1000];
int i,count=0;
gets(a);
for(i=0;a[i]!='\0';i++) 
{ 
  if(ispunct(a[i]))
    count++;
} 
printf("%d",count);
return 0;
}
