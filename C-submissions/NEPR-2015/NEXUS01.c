#include <stdio.h>
#define MAX 50001

int main(void) {
	// your code goes here
	int t,n,c[MAX],i,max;
	long long ans;
	scanf("%d\n",&t);
	while(t--)
	{
	    ans = 0;
	    scanf("%d\n",&n);
	    scanf("%d",&c[0]);
	    max = c[0];
	    for(i=1;i<n;i++)
	    {
	        scanf("%d",&c[i]);
	        if(c[i]>max)
	        {
	            max = c[i];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        ans+=((max-c[i]));
	    }
	    printf("%lld\n",ans);
	    
	}
	
	return 0;
}


