#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100001],t,i,n,wrong,count;
	scanf("%d\n",&t);
	while(t--)
	{
	   scanf("%d\n",&n);
	   for(i=0;i<n;i++)
	   {
	       scanf("%d ",&a[i]);
	   }
	   count=0;
	   wrong=-1;
	   for(i=1;i<n;i++)
	   {
	       if((a[i]!=a[i-1]) && (wrong!=i-1))
	       {
	           wrong=i;
	           count=count+2;
	       }
	       else if((a[i]!=a[i-1]) && (wrong==i-1))
	       {
	           wrong=i;
	           count++;
	       }
	   }
	   printf("%d\n",count);
	}
	return 0;
}

