#include <iostream>
#include <algorithm>
#include <stdio.h>
#define max 100001

using namespace std;
 
int main(void) {
// your code goes here
int t,n,a[max],i,j,min;
long long count;
scanf("%d\n",&t);
    while(t--)
    {
        count = 0;
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>=2)
            {
                count+=a[i];
            }
            else
            {
                break;
            }
        
        }
        if(i==n)
        {
            min=a[0];
            count=count-(min-2);
            printf("%lld\n",count);
        }
        else
        {
            printf("%d\n",-1);
        }
}
return 0;
}
