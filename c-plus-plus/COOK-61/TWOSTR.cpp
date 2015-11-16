#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,flag,i;
	string a,b;
	cin>>t;
	while(t--)
	{
	    flag=1;
	    cin>>a;
	    cin>>b;
	    int l=a.length();
	    for(i=0;i<l;i++)
	    {
	        if(a[i]=='?' && b[i]=='?')
	        {
	            continue;
	        }
	        else if((a[i]=='?' && b[i]!='?') || (a[i]!='?' && b[i]=='?'))
	        {
	            continue;
	        }
	        else if(a[i]==b[i])
	        {
	            continue;
	        }
	        else
	        {
	            flag=0;
	            break;
	        }
	        
	        
	    }
	    if(!flag)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}

