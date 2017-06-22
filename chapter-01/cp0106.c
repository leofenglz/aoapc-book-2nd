#include <stdio.h>
#include <math.h>

int main(void)
{
		int a,i,j,k;
		scanf("%d",&a);
		i = a / 100;
		j = (a % 100) / 10;
		k = a % 10;
		printf("%03d\n",k * 100 + j * 10 + i);
		return 0;
}
