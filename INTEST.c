#include <stdio.h>

long long int main(void) {
	// your code her
	long long int a ,b;
	scanf("%lld %lld", &a,&b);
	long long int count=0;
	long long int arr[a];
	for(long long int i=0; i<a; i++)
	{
		scanf("%lld\n", &arr[i]);
		if( arr[i]%b==0)
	    {
	    	count++;
	    }
	}
	printf("%lld",count);
		

	return 0;
}
