#include <iostream>
#include <stdio.h>
#define max 100000
 
/*int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}*/
using namespace std;
int main() {
	// your code goes here
	int t,n,k,a[max],i,d;
	long long int count;
	scanf("%d\n",&t);
	while(t--)
	{
	    count=0;
	    scanf("%d %d\n",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	       
	    }
	    for(i=0;i<n;i++)
	    {
	           d=(a[i]%k);
	           if(a[i]>=k)
	           {
	               count = count+min(d,k-d);
	           }
	           else
	           {
	               count+=(k-d);
	           }
	           
	    }
	    printf("%lld\n",count);
	}
	return 0;
} 
