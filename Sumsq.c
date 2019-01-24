#include<stdio.h>
int main()
{
int long a,p=0,r;
scanf("%ld",&a);
while(a>0)
{
r=a%10;
p=p+r*r; 
a=a/10;
} 
printf("%ld",p);
return 0;
}
