#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,l,i,j,z,count[101];
	string o[101],m[101];
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d %d\n",&n,&k);
		for(i=0;i<n;count[i++]=0);
		for(i=0;i<n;i++)
		{
			cin>>o[i];
			
		}
		for(i=0;i<k;i++)
		{
			cin>>l;
			for(j=0;j<l;j++)
			{
				cin>>m[j];
				for(z=0;z<n;z++)
				{
					if(o[z].compare(m[j])==0)
					{
						count[z]++;
					}
				}
			}
			
		}
		for(i=0;i<n;i++)
		{
			if(count[i]>0)
			{
				printf("YES ");
			}
			else
			{
				printf("NO ");
			}
		}
		printf("\n");
	}
	return 0;
}
