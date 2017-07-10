#include <stdio.h>

int main(void)
{
		int x,y,z;
		int max,mid,min;
		scanf("%d %d %d",&x,&y,&z);

		if(x > y)
		{
				mid = x;
				min = y;
		}
		else
		{
				mid = y;
				min = x;
		}

		if(z > mid)
		{
				max = z;
		}
		else
		{
				max = mid;
				if(z > min)
				{
						mid = z;
				}
				else
				{
						mid = min;
						min = z;
				}
		}
		printf("%d %d %d\n",min,mid,max);
		return 0;
}
