    #include <iostream>
    #include <stdio.h>
    #include <algorithm>
    #include <math.h>
    
    #define mod 1000000007
    #define max 100001
    
    
    long long fast_exp(int base, int exp)
{
    if(exp==0)
    return 1;
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= mod)
            return base1%mod;
            else
            return base1;
        }
        else
        {
            long long  ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= mod)
            return ans%mod;
            else
            return ans;
        }
    }
}
     using namespace std;
    int main(void) {
    // your code goes here
    int t,n,s[max],i;
    long long sum,pow1,pow2;
    scanf("%d\n",&t);
    while(t--)
    {
         sum=0;
         scanf("%d\n",&n);
         for(i=0;i<n;i++)
         {
            scanf("%d",&s[i]);
         }
         sort(s,s+n);
         for(i=0;i<n;i++)
         {
            pow1=fast_exp(2, i);
            pow2=fast_exp(2,(n-i-1));
            sum =  (sum+(s[i]*((pow1 - pow2 + mod) % mod))%mod)%mod;
         }
         printf("%lld\n",sum);
    }
    return 0;
    }

