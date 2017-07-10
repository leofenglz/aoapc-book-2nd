#include <stdio.h>

int main(void)
{
		int i;
		float sum = 0;
		for(i = 1 ; i <= 1000001;i += 2)
		{
				if(i % 4 == 1)
						sum += (float)(1.0/i);
				else if (i % 4 == 3)
						sum -= (float)(1.0/i);
				//printf("%.6f\n",sum);
		}
		printf("%.6f\n",sum*4.0);
		return 0;
}
