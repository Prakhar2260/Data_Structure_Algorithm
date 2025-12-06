#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N,A,B;
	  scanf("%d %d %d",&N,&A,&B);
	  
	  int leastdistance=1000000; 

        for(int i=0;i<N;i++)
        {
            int X, Y;
            scanf("%d %d",&X,&Y);

            int dist=abs(A-X)+abs(B-Y);
            
            if (dist < leastdistance)
                leastdistance = dist;
                
        }
        
        printf("%d\n",leastdistance);
	}
	return 0;
}

