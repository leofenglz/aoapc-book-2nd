#include <stdio.h>

int main(void)
{
		unsigned long long count,n;
		scanf("%lld",&n);

		count = 0;
		while(n > 1)
		{
				if(n % 2 == 0)
						n = n/2;
				else
						n = n * 3 + 1;
				count ++;
				printf(" --> %d ",n);
				continue;
		}
		printf("\n%d\n",count);
		return 0;
}
