#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  char S[N+1];
	  
	  scanf("%s",&S);
	  
	  int f=-1,l=-1;
	  
	  for(int i=0;i<N;i++)
	  {
         if(S[i]=='1')
         {
          if(f==-1)
          {
            f=i;
          }
            l=i;
            }
        }
	  
	  
	  if(f==-1) 
	  {
        printf("0\n");
        continue;
	  } 
	    
	    
	  int change=0;
        
        for(int i=f;i<=l;i++)
        {
            if(S[i]=='0')
              change++;
        }  
	    
	    printf("%d\n",change);
	}
	return 0;
}

