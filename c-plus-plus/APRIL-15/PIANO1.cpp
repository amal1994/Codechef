#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void) {
	// your code goes here
	int t,n,length,i,j,plays,count;
	string s,s1;
	scanf("%d\n",&t);
	while(t--)
	{
	    plays=0;
	    cin>>s;
	    s1=s;
	    scanf("%d\n",&n);
	    length=(12*n);
	    while(s.length()<length)
	    {
	    for(i=1;i<=length;i++)
	    {
	        count=i;
	        for(j=0;j<s.length();j++)
	        {
	            if(s[j]=='T')
	            {
	                count=count+2;
	            }
	            else if(s[j]=='S')
	            {
	                count++;
	            }
	        }
	        if(count>length)
	        {
	            break;
	        }
	        else
	        {
	            plays=plays+1;
	        }
	    }
	    
	    s.append(s1);
	    }
	    printf("%d\n",plays);
	}
	return 0;
}

