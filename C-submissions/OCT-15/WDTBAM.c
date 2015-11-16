    #include <stdio.h>
    #define MAX 1005
    typedef long long ll;
     
    int main(void) {
    	// your code goes here
    	int t,n,i,w[MAX],count,max,wrong;
    	char one[MAX],two[MAX];
    	
    	scanf("%d\n",&t);
    	while(t--)
    	{
    		count=0;
    		wrong=0;
    		scanf("%d\n",&n);
    		scanf("%s\n",one);
    		scanf("%s\n",two);
    		for(i=0;i<=n;i++)
    		{
    			scanf("%d",&w[i]);
    		}
    		for(i=0;i<n;i++)
    		{
    			if(one[i]==two[i])
    			{
    				count++;
    			}
    			
    		}
    		max=w[0];
    		for(i=1;i<=count;i++)
    		{
    			if(w[i]>max)
    			{
    				max = w[i];
    			}
    		}
    		if(count==n)
    		{
    			printf("%d\n",w[count]);	
    		}
    		else
    		{
    			printf("%d\n",max);
    		}
    		
    	}
    	return 0;
    }
     
