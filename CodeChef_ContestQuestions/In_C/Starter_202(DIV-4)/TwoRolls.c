#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	for(int i=1;i<=T;i++)
	  {
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    
	    if(X+Y+Y>50)
	    printf("NO\n");
	    
	    else
	    {
	     if(X+Y+Y+10>=50)
	       printf("YES\n");
	       
	     else
	       printf("NO\n");
	        
	    }
	  }
  return 0;
}

