#include <stdio.h>

int main(void) {
	// your code here
	int a;
	scanf("%d",&a);
	printf("W");
	for(int i=0;i<=a;i++)
	{
		if(i!=a)
			printf("o");
		else
			printf("w");
	}
	return 0;
}
