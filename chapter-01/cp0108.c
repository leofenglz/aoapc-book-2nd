#include <stdio.h>

int main(void)
{
		int m,n,x,y;
		scanf("%d%d",&n,&m);
		y = (m - 2 * n)/2;
	  x = 2 * n - m/2;

		if(x < 0 || y < 0 || m % 2 == 1)
		{
				printf("No answer\n");
				return 0;
		}	
	  printf("%d %d \n",x,y);
		return 0;
}
