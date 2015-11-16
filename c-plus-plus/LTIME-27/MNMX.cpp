#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	ll cost;
	cin>>t;
	while(t--)
	{
	    cost=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    /*counter = 0;
	    for(i=1;i<n;i++)
	    {
	        cost = cost + min(a[counter],a[i]);
	        if(min(a[counter],a[i])!=a[counter])
	        counter = i;
	    }*/
	    cost =(((ll)a[0])*(n-1));
	    
	    cout<<cost<<endl;
	   
	}
	return 0;
}

