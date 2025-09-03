#include <stdio.h>

int main() 
{
  int X,H;
  scanf("%d %d",&X,&H);
  
  int hours=24*(X-4);
  int totalhours=hours+H;
  
  printf("%d \n",totalhours);
  
  return 0;

}
