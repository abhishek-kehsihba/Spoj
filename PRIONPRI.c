#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(a--){
    int n, i, flag = 0;

   
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

     
    
        if (flag == 0)
          printf("YES\n");
        else
          printf("NO\n");
    
	}
    return 0;
}
