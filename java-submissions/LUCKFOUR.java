/* package codechef; // don't place package name! */
                        /* MAH CODE MAH STYLE! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   
		// your code goes here
		int t,count;
        String s;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		t=Integer.parseInt(br.readLine());
		while(t>0)
		{
		    count =0;
		   s = br.readLine();
		   char n[]=s.toCharArray();
		   for(int i=0;i<n.length;i++)
		   {
		       if(((int)n[i])== 52 )
		       {
		           count++;
		       }
		   }
		   System.out.println(count);
		   t--;
		}
		
	}
}

