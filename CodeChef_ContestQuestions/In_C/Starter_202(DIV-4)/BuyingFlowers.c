#include <stdio.h>

int main() 
{
	// your code goes here
  int T;
  scanf("%d",&T);
  
  for(int i=1;i<=T;i++)
    {
      int N;
      scanf("%d",&N);
      
        int value=200; 

        
        for (int k=N/3;k>=0;k--) 
        { 
            int remainder=N-(3*k);
            
            if (remainder%2==0) 
             {
                 
              int a=remainder/2;
                int totalamt=5*k + 4*a;
                
                if(totalamt<value)
                {
                value=totalamt;
                }
             }
        }
        
        printf("%d \n",value);
     
    } 
    return 0;
}


