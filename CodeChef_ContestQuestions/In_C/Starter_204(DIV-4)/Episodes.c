#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
	 {
	    int N,K;
	    scanf("%d %d",&N,&K);
	    
	    int totaltime=N*K;
	    
	    int hours=totaltime/60;
	    int mins=totaltime-60*hours;
	    
	    printf("%d %d\n",hours,mins);
	     
	 }

}

