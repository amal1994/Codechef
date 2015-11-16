#include <stdio.h>
#define max 100001 
int main(void) {
	// your code goes here
	int n,m,i,count,j;
	int a[max],l[max],counting[max+1];
	scanf("%d %d",&n,&m);

	
	for(i=1;i<=n;i++)
	{
	    scanf("%d ",&a[i]);
	  
	}
	for(i=1;i<=m;i++)
	{
	    count=0;
	    scanf("%d\n",&l[i]);
	    for(j=0;j<=max;counting[j++]=0);
	    for(l[i];l[i]<=n;l[i]++)
	    {
	        if(counting[a[l[i]]]==0)
	        {
	             counting[a[l[i]]]++;
	             count++;
	        }
	       
	    }
	    printf("%d\n",count);
	    
	}
	
	
	return 0;
}

