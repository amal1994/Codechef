#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x,h,i,l,s;
	int lift,stairs,dis_lift,dis_stairs;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d %d %d %d\n",&n,&x,&h,&i);
		scanf("%d %d\n",&l,&s);
		dis_lift = abs(h-x)+abs(x-i);
		dis_stairs = abs(x-i);
		lift = dis_lift*l;
		stairs=dis_stairs*s;
		if(lift<=stairs)
		{
			printf("LIFT\n");
		}
		else
		{
			printf("STAIRS\n");
		}
		
	}
	return 0;
}

