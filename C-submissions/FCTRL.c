#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t,n,di,i,sum;
	scanf("%d",&t);
	while(t--)
	{
       sum=0;
	   scanf("%d",&n);
	   for(i=1;;i++)
	   {
	       if((di=n/pow(5,i))>=1)
	       {
	           sum+=di;
	       }
	       else
	       {
	           break;
	       }
	   }
	   printf("%d",sum);
	   printf("\n");
	}
	return 0;
}

