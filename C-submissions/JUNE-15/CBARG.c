#include <stdio.h>
#define MAX 100001

int main(void) {
	// your code goes here
	int t,n,a[MAX],i;
	long long alloc;
	scanf("%d\n",&t);
	while(t--)
	{
	    alloc = 0;
	    scanf("%d\n",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    
	    alloc= alloc + a[0];
	    
	    for(i=1;i<n;i++)
	    {
	        if(a[i] > a[i-1])
	        {
	            alloc+= (a[i] - a[i-1]);
	        }
	    }
	    printf("%lld\n",alloc);
	}
	
	return 0;
}

