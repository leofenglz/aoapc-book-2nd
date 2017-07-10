#include <stdio.h>

int main(void)
{
		int i;
		int aa,bb,cc,dd;
		for (i = 32 ; i < 100 ; i ++)
		{
				aa = (i * i )/1000;
				bb = ((i * i) % 1000 ) / 100 ;

				cc = ((i * i)%100)/10;
				dd = (i * i )%10;

				if (aa == bb && cc == dd)
					printf("%d\n",i*i);
		}
		return 0;
}
