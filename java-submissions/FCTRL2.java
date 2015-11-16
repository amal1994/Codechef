/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
    static void factorial(int n)
	    {
            BigInteger fact = new BigInteger("1");
            for(int i=2;i<=n;i++)
            {
                
                fact = fact.multiply(BigInteger.valueOf(i));
            }
            System.out.println(fact);
    
	    }
	public static void main (String[] args) throws java.lang.Exception
	{
	   
		// your code goes here
		int t,n;
		String s;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		t = Integer.parseInt(br.readLine());
		while(t>0)
		{
		    n= Integer.parseInt(br.readLine());
		    factorial(n);
		    t--;
		}
	}
}

