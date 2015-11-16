#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int t,cost,i,a[123];
		string s;
		cin>>t;
	//	for(i=0;i<=122;a[i++]=0);
		while(t--)
		{
		    for(i=0;i<=122;a[i++]=0);
		    cost=0;
		    cin>>s;
		    if(s.length()==1)
		    {
		        cout<<1<<endl;
		    }
		    else if(s.length() > 1)
		    {
		        for(i=0;i<s.length();i++)
		        {
		            a[(int)s[i]]+=1;
		        }
		        for(i=65;i<=122;i++)
		        {
		            //cout<<a[i];
		            if((a[i]%2==0) && (a[i]/2)>0)
		            {
		                cost+=(a[i]/2);
		            }
		            else if((a[i]%2!=0))
		            {
		                cost+=((a[i]/2)+1);
		            }
		        }
		        cout<<cost<<endl;
		    }
		   
		}
	return 0;
}

