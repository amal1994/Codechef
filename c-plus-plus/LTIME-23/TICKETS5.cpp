#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	string s;
	scanf("%d\n",&t);
	while(t--)
	{
	    cin>>s;
	    if((s[0])!=(s[1]) && (s.length()%2 == 0))
	    {
	    for(i=0;i<s.length()-1;i=i+2)
	    {
	        if((s[0]!=s[i]) || (s[1]!=s[i+1]))
	        {
	            break;
	        }
	    }
	    if(i==(s.length()))
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

