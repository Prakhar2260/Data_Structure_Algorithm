int evenNumberBitwiseORs(int* nums, int numsSize) 
{
  int even[numsSize]; 
  int evenlength=0;
    
 for(int i=0;i<numsSize;i++)
 {
  if(nums[i]%2==0)
  {
   even[evenlength]=nums[i];   
   evenlength++;   
  }
 }

  
 
    
  int bits=0;  
  for(int j=0;j<evenlength;j++)
  {
   bits=bits|even[j];   
  }

  if(bits==0)
      return 0;

   else
       return bits;

    
}
