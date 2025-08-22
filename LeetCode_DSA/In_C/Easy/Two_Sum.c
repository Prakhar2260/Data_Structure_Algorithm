# include <stdio.h>

int main()
{
 int n;

 printf("ENTER LENGTH OF ARRAY\n");
 scanf("%d",&n);

 int ar[n];

 printf("ENTER ARRAY ELEMENTS\n");

 for(int i=0;i<n;i++)
 {
   scanf("%d",&ar[i]); 
 }
 
 int target;
 printf("ENTER THE TARGET ELEMENTS\n");
 scanf("%d",&target);

 for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
      {
       if((ar[i]+ar[j])==target)
         {
           printf("[%d,%d]",i,j); 
           break; 
         }
      }
   }



  return 0;
}
