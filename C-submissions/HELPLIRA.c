    #include<stdio.h>
    int main()
    {
    int i,n,area=0,x1,x2,x3,y1,y2,y3,minind=0,maxind=0,min,max;
    int arr[100];
    //printf("enter the no. of triangles\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    //    printf("enter the co ordinates\n");
    	scanf("%d",&x1);
    	scanf("%d",&y1);
    	scanf("%d",&x2);
    	scanf("%d",&y2);
    	scanf("%d",&x3);
    	scanf("%d",&y3);
     
    	area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
     
    	if(area<0)
    	area*=-1;
     
    	arr[i-1]=area;
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
    	if(arr[i]<=min)
    	{
    		min=arr[i];
    		minind=i+1;
    	}
    	if(arr[i]>=max)
    	{
    		max=arr[i];
    		maxind=i+1;
    	}
    }
    printf("%d %d", minind , maxind);
     
    return 0;
    } 
