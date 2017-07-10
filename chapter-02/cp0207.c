#include <stdio.h>

int main(void)
{
		int n,i,j;
		unsigned long long sum,tmp;
		scanf("%d",&n);
		sum = 0;
		for(i = 1; i <= n ; i++)
		{
				tmp = 1;
				for(j = 1; j <= i; j++)
				{
						tmp *= j;			
				}
				sum += tmp;
		}
		printf("%d\n",sum%1000000);
		return 0;
}
