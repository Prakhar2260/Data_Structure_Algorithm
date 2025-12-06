#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

     for(int i=1;i<=T;i++) 
      {
        int N;
        scanf("%d",&N);

        long long LowSumm=N-2;
        
        if(LowSumm<0)
          LowSumm=0; 
          
        long long HighSumm=(long long)(N-1)*(N-2)/2;

        printf("%lld %lld\n",LowSumm,HighSumm);
  }

    return 0;
}
