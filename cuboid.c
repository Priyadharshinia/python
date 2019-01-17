#include<stdio.h>
int main()
{
int L,B,H,tsarea,volume;
scanf("%d\t%d\t%d",&L,&B,&H);
tsarea=(2*(L*B+B*H+L*H));
volume=(L*B*H);
printf("%d\t%d",tsarea,volume);
return 0;
}
