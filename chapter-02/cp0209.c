#include <stdio.h>

int main(void)
{
		int n,i=0;
		float sum = 0.0;
		int max = 0,min = 1000;
		while(scanf("%d",&n) == 1)
		{
				sum += n;
				i ++;
				if(n >= max)
						max = n;

				if(n <= min)
						min = n;
		}
		printf("\n%d,%d,%.3f\n",min,max,(float)(sum/i));
		return 0;
}
