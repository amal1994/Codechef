#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int m,x,y,i,j;
	int lower,higher,ans;
	cin>>t;
	int count[100];
	while(t--)
	{
	    cin>> m>> x>> y;
    	for(i=1;i<=100;count[i++]=0);
    	int number;
    	ans=0;
    	for(i=1;i<=m;i++)
    	{
    	    cin>>number;
    	    lower = number-(x*y);
    	    higher = number+(x*y);
    	    if(lower<1)
	        {
	            if(higher>100)
	            {
	             for(j=1;j<=100;j++)
	            {
	                  count[j]=1;
	             }
	            }
	            
	         else
	             {
	              for(j=1;j<=higher;j++)
	              {
	                count[j]=1;
	             }
	             }
	           }
	        else
	        {
	            if(higher>100)
	            {
	             for(j=lower;j<=100;j++)
	            {
	                  count[j]=1;
	             }
	            }
	            else
	            {
	            for(j=lower;j<=higher;j++)
	            {
	                count[j]=1;
	            }
	        }
	        }
    	}
	    for(j=1;j<=100;j++)
	    {
	        if(count[j]==0)
	        {
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

