#include <stdio.h>

int main() 
{
	// your code goes here
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	
	int left=N-A*B;
	
	printf("%d\n",left);
	return 0;

}

