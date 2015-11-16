#include <cstdio>
#include <cstring>
#define MAX 5000000
int arr[MAX];


void markMultiples(int arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num ] = 1; 
        ++i;
    }
}
void SieveOfEratosthenes(int n)
{
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
       
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (int i=2; i<=n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
               
                markMultiples(arr, i, n);
            }
        }
    }
}
int main(void) {
	// your code goes here
	long long i,j;
	int t,n;
	SieveOfEratosthenes(MAX);

	for(i=2;i<=MAX;i++)
	{
		if((arr[i]==0) && (((i)%4)==1) )
		{
			
			
			for(j=1;(j*i)<=MAX;j++)
			{
				arr[(j*(i))]=2;
			
				
			}
		
		}
	}
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d\n",&n);
		if(arr[n]==2)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
}
	
	return 0;
}

