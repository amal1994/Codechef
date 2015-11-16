#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int isPowerOfTwo(int x)
{
  int powerOfTwo = 1;

 while(powerOfTwo < x && powerOfTwo < 2000000000)
   powerOfTwo *= 2;
 return (x == powerOfTwo);
}

int main() {
	// your code goes here
	int t,a,b;
	ll op;
	
	cin>>t;
	while(t--)
	{
	    op=0;
	    cin>>a>>b;
	    if(a==b)
	    {
	        cout<<op<<endl;
	    }
	    else if(a<b)
	    {
	        while(!isPowerOfTwo(a))
	        {
	            if(a%2==0)
	            {
	                op++;
	                a=a/2;
	            }
	            else
	            {
	                op++;
	                a=(a-1)/2;
	            }
	        }
	        while(a!=b)
	        {
	            a=a*2;
	            op++;
	        }
	        cout<<op<<endl;
	    }
	    else
	    {
	        
	        while(!isPowerOfTwo(a))
	        {
	            if(a%2==0)
	            {
	                op++;
	                a=a/2;
	            }
	            else
	            {
	                op++;
	                a=(a-1)/2;
	            }
	        }
	        if(a>b)
	        {
	            while(a!=b)
	            {
	                a=a/2;
	                op++;
	            }
	        }
	        else
	        {
	            while(a!=b)
	            {
	                a=a*2;
	                op++;
	            }
	        }
	        cout<<op<<endl;
	    }
	    
	}
	return 0;
}

