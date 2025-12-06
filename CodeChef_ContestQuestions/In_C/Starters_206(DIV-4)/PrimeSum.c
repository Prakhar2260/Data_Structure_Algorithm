#include <stdio.h>

int PrimeSum(int x) 
  {
    if(x<=1) 
    return 0;
    
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) 
        return 0;
    }
    return 1;
}


int main() {
	// your code goes here
   int T;
   scanf("%d",&T);
   
   while(T--)
   {
     int N;
     scanf("%d",&N);
     
     int ar[N];
     for(int i=0;i<N;i++)
         scanf("%d",&ar[i]);
         
      int pairs=0;
      
        for(int i=0;i<N;i++)
           {
            for(int j=i+1;j<N;j++) 
            {
                if (PrimeSum(ar[i]+ar[j])) 
                {
                    pairs++;
                }
            }
        }

        printf("%d\n",pairs);   
   }
   
   return 0;

}

