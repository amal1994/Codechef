#include <iostream>
using namespace std;

int v[8][3]={0,2,5,0,5,3,4,0,3,2,0,4,4,1,2,4,1,3,5,3,1,5,1,2};
int main() {
	// your code goes here
	int t,i,flag;
	string s[6];
	cin>>t;
	while(t--)
	{
	    flag=0;
	    for(i=0;i<6;i++)
	    {
	        cin>>s[i];
	    }
	    for(i=0;i<8;i++)
	    {
	        if(( s[v[i][0]] == s[v[i][1]])&& (s[v[i][1]] == s[v[i][2]]))
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

