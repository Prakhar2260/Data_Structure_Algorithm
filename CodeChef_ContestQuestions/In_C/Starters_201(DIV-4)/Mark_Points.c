#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	
	for(int i=1;i<=T;i++)
     {
       int N;
       scanf("%d",&N);
       char S[N+1];
       
         scanf("%s",&S);
         
        int count=1;
        int i=0;

        while(i<N)
        {
         if(S[i]=='1')
         {
            int j=i;
            
            while(j<N && S[j]=='1')
            j++;
            
            int l=j-i;
            if(l<3)
            {
              count=0;
              break;
            }
            
            i = j; 
         } 
            
            else
            {
              i++;
            }
        }

        if (count==1)
            printf("Yes\n");
        else
            printf("No\n");
            
         
     }
}

