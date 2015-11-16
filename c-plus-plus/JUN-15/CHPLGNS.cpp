#include <iostream>
#include <algorithm>
#include <cstdlib>
#define MAX 100000
 
struct polygons
            {
                int minval, pos;
        }a[100001];
 
 int b[100001];
using namespace std;
int comparator(const polygons &p, const polygons &q)
{
    return p.minval<q.minval;
}
 
int main() {
        // your code goes here
        int t,n,i,j,number;
        cin>>t;
        while(t--)
        {
            cin>>n;
           /* struct polygons
            {
                int minval, pos;
        }a[n]; */
            int x,y,min;
            for(i=0;i<n;i++)
            {
                cin>>number;
                cin>>x>>y;
                min=x;
                for(j=1;j<number;j++)
                {
                    cin>>x>>y;
                    if(x<min)
                    {
                        min = x;
                    }
 
                }
                a[i].minval=min;
                a[i].pos=i;
            }
            
            sort(a,a+n,comparator);
            for(i=0;i<n;i++)
            {
                b[a[i].pos]=n-1-i;
            }
            for(int i=0;i<n;i++)
            cout<<b[i]<< " ";
           	cout<<endl;
        }
        return 0;
}
