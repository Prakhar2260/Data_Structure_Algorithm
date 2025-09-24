#include <stdio.h>

int main() {
	// your code goes here
	char S[4];
	scanf("%s",S);
	
	int length=strlen(S);
	
	if(length==3)
	{
	 if(S[0]==S[2] && S[1]=='w')
	   {
	       printf("Cute\n");
	   }
	   
	  else 
	  {
	     printf("No\n");  
	  }
	}
	
	else
	{
	    printf("No\n");
	}
}

