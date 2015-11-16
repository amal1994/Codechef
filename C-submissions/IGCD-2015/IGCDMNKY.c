#include <stdio.h>

int main(void) {
	// your code goes here
	int t,h,m,n;
	float jump;
	scanf("%d\n",&t);
	while(t--)
	{
		jump = 0.00;
		scanf("%d %d %d\n",&h,&n,&m);
		while(h!=0)
		{
			if(n <h)
			{
				jump++;
				h=h-(n-m);
			}
			else
			{
				break;
			}
		}
		if(((int)(jump+n)) ==h)
		{
			printf("%.2f\n",jump);
		}
		else
		{
			jump = jump+(h/(float)n);
			printf("%.2f\n",jump);
		}
		
		
	}
	return 0;
}

