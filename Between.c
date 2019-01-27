#include<stdio.h>
int main()
{
int a,b,c,d,i;
scanf("%d",&c);
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{ 
d=a+1;
if(d==c) 
{ 
printf("yes");
}
else
{
printf("no");
}
return 0;
}

}
