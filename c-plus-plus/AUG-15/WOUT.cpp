#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,h,i,j,a,b,k;
	ll ans,energy;
	cin>>t;
	while(t--)
	{
	    cin>>n>>h;
	    ans=0;
	    energy=0;
	    int count[n]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        for(j=a;j<=b;j++)
	        {
	            count[j]++;
	        }
	    }
	    for(j=0;j<=h-1;j++)
	    {
	        energy=energy+(n-count[j]);
	    }
	    
	    
	    for(j=1;j<=n-h;j++)
	    {
	        ans=0;
	        for(k=j;k<j+h;k++)
	        {
	            ans=ans+(n-count[k]);
	            
	        }
	        if(ans<energy)
	        {
	            energy=ans;
	        }
	    }
	    
	    
	    cout<<energy<<endl;
	}
	return 0;
}

