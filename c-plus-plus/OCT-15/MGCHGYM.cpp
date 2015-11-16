    #include <iostream>
    #include <vector>
    #include <cstdio>
    #include <cstdlib>
    #include <algorithm>
    using namespace std;
    vector<int> w;
    void reversal(int l,int r)
    {
    	int num = (r-l+1)/2;
    	for(int i=l;i<l+num;i++)
    	{
    		 w[i]=w[i]+w[r];
    		 w[r]=w[i]-w[r];
    		 w[i]=w[i]-w[r];
    		 r--;
    	}
    }
    bool isSubsetSum(vector<int>& w, int l,int r, int sum)
    {
       if (sum == 0)
         return true;
       if (r == l && sum != 0)
         return false;
     
       // If last element is greater than sum, then ignore it
       if (w[r-1] > sum)
         return isSubsetSum(w,l, r-1, sum);
     
       /* else, check if sum can be obtained by any of the following
          (a) including the last element
          (b) excluding the last element   */
       return isSubsetSum(w,l, r-1, sum) || isSubsetSum(w,l, r-1, sum-w[r-1]);
    }
     
    int main() {
    	// your code goes here
    	int n,q,i,item;
    	int arg_c,arg_1,arg_2,arg_3;
    	scanf("%d %d\n",&n,&q);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&item);
    		w.push_back(item);
    	}
    		while(q--)
    		{
    			cin>>arg_c;
    			switch(arg_c)
    			{
    				case 1: scanf("%d %d\n",&arg_1,&arg_2);
    						w[arg_1-1]=arg_2;
    						break;
    				case 2: scanf("%d %d\n",&arg_1,&arg_2);
    						reversal(arg_1 - 1,arg_2 - 1);
    						break;
    				case 3: scanf("%d %d %d\n",&arg_1,&arg_2,&arg_3);
    						if(isSubsetSum(w, arg_1-1 , arg_2, arg_3 ))
    						{
    							printf("Yes\n");
    						}
    						else
    						{
    							printf("No\n");
    						}
    						break;
    						
    			}
    		}
     
    	return 0;
    } 
