#include <stdio.h>
#include <math.h>

#define PI	3.14159265

int main(void)
{
		float r,h;
		scanf("%f%f",&r,&h);
		printf("%.3f\n",2 * PI * r * h + 2 * PI * r * r);
		return 0;
}
