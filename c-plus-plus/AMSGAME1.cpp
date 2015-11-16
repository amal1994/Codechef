#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b == 0)
    {
      return a;  
    }
    else
    {
        gcd(b,a%b);
    }    
}

int main() {
	// your code goes here
	int t,n,i,ans;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ans=a[0];
	    for(i=1;i<n;i++)
	    {
	         ans=gcd(ans,a[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

