#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t,n,i;
	long long sum;
	scanf("%d\n",&t);
	while(t--)
	{
	    sum=0;
	    scanf("%d\n",&n);
	    for(i=1;i<=sqrt(n);i++)
	    {
	        if((n%i)==0 && (i==n/i))
	        {
	            sum=sum+i;
	        }
	        else if((n%i)==0 && (i!=n/i))
	        {
	            sum=sum+i+(n/i);
	        }
	        
	    }
	    printf("%lld\n",sum);
 
	}
	return 0;
}
 
