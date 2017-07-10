#include <stdio.h>
#include <time.h>

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
						tmp = tmp % 1000000;
				}
				sum += tmp;
		}
		printf("%d\n",sum%1000000);
		printf("Time used = %.2f \n",(double)clock()/CLOCKS_PER_SEC);
		return 0;
}
