#include <stdio.h>
int main ()
{
	int index=1;
	int ecount=0,ocount=0;
	while(index <=10)
	{
		if (index %2 ==0)
		{
		  ecount++;
		  printf("EVEn number  %d\n",index);
		}
		else
		{
			ocount++;
			printf("odd number  %d\n",index);
		}
		
	index++;
	}
	return 0;
}