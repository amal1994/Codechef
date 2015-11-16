#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#define MAX 50001

using namespace std;

vector<int> vec;
//vector<int> :: iterator it;

int main() {
	// your code goes here
	int n,m,i,l,j,r,a[MAX];
	long long ans;
	scanf("%d\n",&n);
	
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d\n",&m);
	for(i=1;i<=m;i++)
	{
	    scanf("%d %d\n",&l,&r);
	    if(l==r)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        ans=0;
	        for(j=l;j<=r;j++)
	        {
	            vec.push_back(a[j]);
	        }
	        sort(vec.begin(),vec.end());
	        for(j=1;j<vec.size();j++)
	        {
	            ans+= pow((vec[j]-vec[j-1]),2);
	        }
	        printf("%lld\n",ans);
	    }
	    vec.clear();
	    
	}
	
	
	
	return 0;
}

