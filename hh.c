#include<stdio.h>
int main()
{
	int n,i=1;
	while(i<=500)
	{
		n=i;
		while(n>=1)
		{
			if(n%i==0)
			{
				printf("%d",i);
			}
		}
	}
}