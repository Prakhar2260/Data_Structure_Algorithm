import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
      int T;
      Scanner sc=new Scanner(System.in);
      T=sc.nextInt();
      
      for(int t=1;t<=T;t++)
         {
         int N,M;
         N=sc.nextInt();
         M=sc.nextInt();
         
         String S;
         S=sc.next();
         
         int Alice=0,Bob=0;
         char ch;
         for(int i=0;i<M;i++)
           {
             ch=S.charAt(i);  
             if(ch=='0')
             Bob++;
             
             else
             Alice++;
           }
           
           int differ= Math.abs(Alice-Bob);
            int remain=N-M;
            
            if(differ<=remain && (remain-differ)%2==0)
            {
                System.out.println("Yes");
            } 
            
            else 
                System.out.println("No");        
         }
	}
}
