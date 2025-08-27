#include <stdio.h>

int main()  
{
   int T;
   scanf("%d",&T);
   
   for(int i=1;i<=T;i++)
     {
      int A,B;
      scanf("%d %d",&A,&B);
      
      int j=A;
      if(B/2<j)
      j=B/2;
      
      int juice=3*j;
      printf("%d\n",juice);
      
     }
     return 0;
}

