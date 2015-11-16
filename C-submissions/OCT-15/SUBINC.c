    #include <stdio.h>
    #define MAX 100001
    typedef long long ll;
     
    int main(void) {
    	// your code goes here
    	int t,n,a[MAX],i;
    	ll ans,count;
    	scanf("%d\n",&t);
    	while(t--)
    	{
    		scanf("%d\n",&n);
    		ans=0;
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&a[i]);
    		}
    		for(i=0;i<n-1;)
    		{
    			if(a[i]<=a[i+1])
    			{
    				count=0;
    				while( (i<n-1) && (a[i]<=a[i+1]))
    				{
    					count++;
    					i++;
    				}
    				ans=ans+(((count*(count+1))/2));
    			}
    			else
    			{
    				i++;
    			}
    		}
    		printf("%lld\n",ans+n);
    		
    	}
    	return 0;
    }
     
