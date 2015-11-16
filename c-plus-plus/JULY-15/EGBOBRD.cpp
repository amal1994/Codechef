#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	ll k,left,package,number;
	cin>>t;
	while(t--)
	{
	    package=0;
	    left=0;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        a[i]=a[i]-left;
	        number=ceil(((double)(a[i]))/k);
	        package=package+number;
	        if((a[i]%k)==0)
	        {
	            left=(number*k)-a[i];
	        }
	        else
	        {
	            left=(number*k)-a[i]-1;
	        }
	        
	        
	    }
	    cout<<package<<endl;
	}
	return 0;
}

