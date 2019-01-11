#include <stdio.h>

int main(void) {
	int i=0,j;
	int a;
	scanf("%d",&a);
	int arr[a+1];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	int b;
	scanf("%d",&b);
	int arr1[b+1];
	for(i=0;i<b;i++)
	{
		scanf("%d",&arr1[i]);
	}

	for (i = 0, j = 0; (i < a) && (j < b); ) {
		if (arr[i] > arr1[j]) {
			j++;
		} else if (arr[i] < arr1[j]) {
			printf("%d ",arr[i]);
			i++;
		} else {
			i++;
			j++;
		}
	}
	if (j == b) {
		while (i < a) {
			printf("%d ",arr[i]);
			i++;
		}
	}

	return 0;
}
