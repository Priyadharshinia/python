#include<stdio.h>
int main()
{
int long A,B,C,D,val;
scanf("%ld%ld%ld",&A,&B,&C); 
D=pow(A,B);
val=D%C;
printf("%ld",D);
return 0;
}
