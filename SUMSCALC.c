#include <stdio.h>

int main(void) {
	// your code here
	int p;

    scanf("%d",&p);

    while(p--)
	{
		long long int n,i;
		long int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,c,d;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			sum1+=i;
		}
		sum2=(n*(n+1));
		sum3=n*n;
		for(i=1;i<=n;i++)
		{	c=i*i;
			
				{
					sum4+=c;
				}
			
		}
		c=0;
		for(i=1;i<=n;i++)
		{	c=i*i;
			d=c*i;
			
				{
					sum5+=d;
				}
			
		}
		printf("%lld %lld %lld %lld %lld\n",sum1,sum2,sum3,sum4,sum5);
	}
	return 0;
}
