#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t,l,i,a[26];
	char s[110];
	scanf("%d\n",&t);
	while(t--)
	{
	    for(i=0;i<26;a[i++]=0);
	    scanf("%s\n",s);
	    l=strlen(s);
	    for(i=0;i<l;i++)
	    {
	        a[s[i]-'A']++;
	    }
	    if(l<=9)
	    {
	        if((a['L'-'A']>=2) && (a['T'-'A']>=2) && (a['I'-'A']>=2) && (a['M'-'A']>=2) && (a['E'-'A']>=1))
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	    else
	    {
	        if((a['L'-'A']>=2) && (a['T'-'A']>=2) && (a['I'-'A']>=2) && (a['M'-'A']>=2) && (a['E'-'A']>=2))
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	        
	    
	    
	}
	return 0;
}


