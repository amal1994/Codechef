#include <stdio.h>
#include <ctype.h>
#define MAX 100001

int main(void) {
	// your code goes here
	int n,i,k,l,num;
	char s[MAX];
	scanf("%d\n",&n);
	while(n--)
	{
	    
	    scanf ("%[^\n]%*c",s);
	    scanf("%d\n",&k);
	    k = k%26;
	    l=strlen(s);
	    for(i=0;i<l;i++)
	    {
	        if(isalpha(s[i])>0)
	        {
	            if(s[i]>=65 && s[i]<=90)
	            {
	                if((s[i]-k)<65)
	                {
	                    num=65-abs(s[i]-k);
	                    printf("%c",91-num);
	                }
	                else
	                {
	                    printf("%c",s[i]-k);
	                }
	            }
	            else 
	            {
	                if((s[i]-k)<97)
	                {
	                    num=97-abs(s[i]-k);
	                    printf("%c",123-num);
	                }
	                else
	                {
	                    printf("%c",s[i]-k);
	                }
	            }
	        }
	        else
	        {
	            printf("%c",s[i]);
	        }
	    }
	    printf("\n");
	    
	}
	
	return 0;
}


