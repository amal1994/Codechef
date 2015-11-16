#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	long long sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    int n,d;
	    cin>> n>> d;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(i=n-1;i>0;i--)
	    {
	        if((a[i]-a[i-1])<d)
	        {
	            sum+=(a[i]+a[i-1]);
	            i--;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

