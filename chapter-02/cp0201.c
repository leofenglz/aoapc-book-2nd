#include <stdio.h>

int main(void)
{
		int n;
		int i;
		scanf("%d",&n);
		if(n == 0)
		{
				printf("Please input a valid number \n");
				return 0;
		}

		for(i = 1; i <= n ; i ++)
		{
				printf("%d\n",i);
		}
		return 0;
}
