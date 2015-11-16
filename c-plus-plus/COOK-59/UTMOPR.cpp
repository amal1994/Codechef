                                    /*  CHALLENGE YOURSELF  */
   
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,n,i;
	long long sum,last;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n >>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	   }
	   sum++;
	   last=(sum*pow(2,k-1));
	   if(last%2==0)
	   {
	       cout<<"even";
	   }
	   else
	   {
	       cout<<"odd";
	   }
	   cout<<endl;
	}
	   
	return 0;
}

