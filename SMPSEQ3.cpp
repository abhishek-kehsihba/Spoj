#include <stdio.h>

int main(void) {
	// your code here
	int a,b;
	scanf("%d",&a);
	int arr1[a];
	int count[a];
	for (int i=0;i<a;i++)
	{
		scanf("%d ",&arr1[i]);
		count[i]=0;
	}
	
	scanf("%d",&b);
	int arr2[b];
	for (int i=0;i<b;i++)
	{
		scanf("%d ",&arr2[i]);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(arr1[i]==arr2[j])
			{
				count[i]++;
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		if(count[i]==0)
		{
			printf("%d ",arr1[i]);
		}
	}
	
	return 0;
}
