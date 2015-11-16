    #include <iostream>
     
    #include <set>
     
    #include <string>
     
    #include <cstdlib>
    #include <cstdio>
     
    using namespace std;
     
    int main()
     
    {
        int n,m,i,j;
        int number,l,r,x,q;
        scanf("%d %d\n",&n,&m);
        set<int>* entry;
        entry = new set<int>[n];
     
     
        set<int>::iterator it;
     
        
        for(i=0;i<m;i++)
        {
     
            scanf("%d",&number);
            if(number==0)
            {
                scanf("%d %d %d",&l,&r,&x);
                for(j=l-1;j<=r-1;j++)
                {
                    entry[j].insert(x);
                }
            }
            else
            {
                scanf("%d",&q);
                printf("%d\n",entry[q-1].size());
            }
            
     
        }
           
        return 0;
     
    } 
