#include <bits/stdc++.h>
//typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	int t,i;
	string s1,s2;
	int operations;
	cin>>t;
	while(t--)
	{
	    operations = 0;
	    cin>>s1;
	    cin>>s2;
	    int l = s1.length();
	    string current,next;
	    
	   if((s1[0]=='#') && (s2[0]=='#'))
	   {
	       cout<<"No"<<endl;
	       continue;
	   }
	   else if(s1[0]!='#')
	   {
	       current=s1;
	       next=s2;
	   }
	   else
	   {
	       current = s2;
	       next = s1;
	   }
	   string s;
	   for(i=0;i<l-1;i++)
	   {
	      /* if((current[i+1]=='#') && (next[i]=='#') && (next[i+1]=='#'))
	       {
	           break;
	       }*/
	        if(current[i+1]=='#' && next[i+1]=='#')
	       {
	           break;
	       }
	       if((current[i+1]=='#') &&  (next[i+1]!='#'))
	       {
	           operations++;
	           s=current;
	           current=next;
	           next=s;
	   
	       }
	      /* else if((current[i+1]=='#') && (next[i]=='#') && (next[i+1]!='#'))
	       {
	           operations++;
	           s=current;
	           current=next;
	           next=s;
	           
	       }*/
	   }
	   if(i==(l-1))
	   {
	       cout<<"Yes"<<endl;
	       cout<<operations<<endl;
	   }
	   else
	   {
	       cout<<"No"<<endl;
	   }
	   
	    
	}

	return 0;
}

