#include <stdio.h>
#include <math.h>
typedef long long ll;

int main(void) {
	// your code goes here
	int t;
	long long n,i,ans;
	scanf("%d\n",&t);
	while(t--)
	{
		ans=-1;
		scanf("%lld\n",&n);
		if(n==1)
		{
			ans=2;
		}
		else
		{
		
		for(i=2;i<=30;i++)
		{
			if(n==(((ll)pow(2,i))-1))
			{
				ans=(((ll)pow(2,i))-1)/2;
			}
		}
		}
	
			printf("%lld\n",ans);
		
		
	}
	return 0;
}

