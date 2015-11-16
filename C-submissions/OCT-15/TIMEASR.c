#include <stdio.h>
#define min(a,b) ((a)<(b)?a:b)
int main(void) {
	// your code goes here
	int t,i,j;
	float a,hours,minutes,angle;
	float epsilon = 0.008333f;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%f\n",&a);
		
		for(i=0;i<12;i++)
		{
			for(j=0;j<60;j++)
			{
				hours=((float)i+j/(float)60)*(float)30;
			
				minutes = (float)j*((float)6);
				
				angle = fabs(hours-minutes);
				
				angle = min((float)360-angle,angle);
				if(fabs(a-angle)<epsilon)
				{
					if(i<=9 && j<=9)
					{
						printf("0%d:0%d\n",i,j);
					}
					else if(i<=9)
					{
						printf("0%d:%d\n",i,j);
					}
					else if(j<=9)
					{
						printf("%d:0%d\n",i,j);
					}
					else
					{
						printf("%d:%d\n",i,j);
					}
				}
			}
		}
		
	}
	return 0;
}

