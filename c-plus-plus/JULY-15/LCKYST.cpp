    #include <iostream>
    #include <math.h>
    using namespace std;
    int power[13]={5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625,1220703125};
     
    int main() {
    	// your code goes here
    	int n,i,j,count_ten,k;
    	cin>>n;
    	int a[n];
    	long long ans,temp;
    	for(i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	}
    	for(i=0;i<n;i++)
    
    	{
    	   
    	        //count_ten=0;
    	        j=0;
    	        while((a[i]%power[j])==0)
    	        {
    	   
    	            j++;
    	        }
    	        //cout<<pow_num;
    	      /*  while(temp%10==0)
    	        {
    	            count_ten++;
    	            temp=temp/10;
    	        }*/
    	        for(k=0;k<=j;k++)
    	        {
    	            ans=a[i]*(pow(4,k));
    	            temp=ans;
    	            count_ten=0;
    	            while(temp%10==0)
    	            {
    	                count_ten++;
    	                temp=temp/10;
    	            }

    	            if(count_ten == j)
    	            {
    	                break;
    	            }
    	            
    	        }
    	        
                cout<<ans<<endl;
    	 
    	    
    	  /*  else
    	    {
    	        cout<<a[i]<<endl;
    	    }*/
    	}
    	return 0;
    } 
