#include <bits/stdc++.h>
#define MAX 2001
using namespace std;

int main(void) {
	// your code goes here
	int t,n,k,i,j,x,y;
	scanf("%d\n",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&k);
	    char s[n];
	    for(i=0;i<n;s[i++]='(');
	    for(i=0;i<k;i++)
	    {
	        scanf("%d %d",&x,&y);
	        if((y-x+1)%2==0)
	        {
            for(j=x;j<=y;j=j+2)
            {
                s[j]='(';
                s[j+1]=')';
            }
	        }

	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%c",s[i]);
	    }
	    cout<<endl;
	}
	
	return 0;
}


