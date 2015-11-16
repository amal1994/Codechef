#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
	// your code goes here
	char s[101];
	int i,digit=0,small=0,big=0;
	scanf("%s\n",s);
	for(i=0;i<strlen(s);i++)
	{
	    if(isdigit(s[i]))
	    digit++;
	    else if(((int)s[i]<=122) && ((int)s[i]>=97))
	    small++;
	    else if(((int)s[i]<=90) && ((int)s[i]>=65))
	    big++;
	}
	if((strlen(s)>=5) && (digit>=1) && (small>=1) && (big>=1))
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	
	return 0;
}

