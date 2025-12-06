#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b)
  {
    return (*(int*)a-*(int*)b);
  }

int main() 
{
	// your code goes  
	int T;
	scanf("%d",&T);
	
	while(T--)
	  {
	    int N,K;
	    scanf("%d %d",&N,&K);
	    
	    int ar[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&ar[i]);
	     
	    qsort(ar,N,sizeof(int),compare);
	    
	    int sum=0;
	    for (int i=N-K;i<N;i++) 
	    {
            sum+=ar[i];
	    }
	    
	    printf("%d\n",sum);
	      
	      
	  }


  return 0;
}

