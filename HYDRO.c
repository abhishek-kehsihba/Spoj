#include <stdio.h>

int main() {
	
	int a;
	scanf("%d",&a);
	while(a--)
	{
		int size,ans=0;
		scanf("%d",&size);
		int arr[size];
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			
		}
		int water = 0;
        int p_l = 0;
        int p_r = size - 1;
        int max_l = arr[p_l];
        int max_r = arr[p_r];
        while(p_r>p_l)
        {
            if (max_l<max_r)
            {
                p_l++;
                if (arr[p_l]>=max_l)
                {
                    max_l = arr[p_l];
                }
                else
                {
                    water = water + (max_l - arr[p_l]);
                }
            }
            else
            {
                p_r--;
                if (arr[p_r]>=max_r)
                {
                    max_r = arr[p_r];
                }
                else
                {
                    water = water + (max_r - arr[p_r]);
                }
            }
        }
        printf("%d\n", water);
    }
    return 0;
	}


