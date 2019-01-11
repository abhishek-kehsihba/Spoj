#include <stdio.h>
int recur(long long int n)
{
	if(n==1) return n;
	else if(n==0||n%2!=0) return 0;
	else if(n==2) return 2;
	else return(2+recur(n/2));
}

int main(void) {
	// your code here
	long long int a;
	scanf("%lld",&a);
	printf("%lld",recur(a));
	return 0;
}

}