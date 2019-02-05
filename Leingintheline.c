#include <stdio.h>
int main(void) 
{ 
int a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
  scanf("%d%d",&c,&d);
  scanf("%d%d",&e,&f);
    if((a==0)||(b==0))
   {  
        if((c==0)||(d==0)) 
      {  
                if((e==0)||(f==0)) 
              { 
                printf("yes");
               } 
               else
               {
            printf ("no");
               }
 
      }
       else 
      {  
        printf("no");
      }
   }
else  
   { 
    printf("no");
   }
	return 0;
}
