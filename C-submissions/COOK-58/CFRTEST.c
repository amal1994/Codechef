#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,a[101],i,count,value;
	scanf("%d\n",&t);
	while(t--)
	{
	    count=0;
	    scanf("%d\n",&n);
	    for(i=0;i<=100;a[i++]=0);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&value);
	        if(a[value]==0)
	        {
	            a[value]=1;
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}


