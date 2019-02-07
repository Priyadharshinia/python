#include <stdio.h>
 
int main(void) 
{
	int a[100],n,sum,j,i,flag=0;
scanf("%d%d",&n,&sum);  
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
} 
for(i=0;i<n;i++) 
{ 
for(j=0;j<n;j++) 
{ 
if(a[i]+a[j]==sum)
{ 
flag=1; 
break;
}
}
}
if(flag==0) 
{ 
printf("no");
} 
else 
{ 
printf("yes");
}
	return 0;
}
 
