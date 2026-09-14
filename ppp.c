#include<Stdio.h>
int main()
{
	int n,dc;
	int j=1;
	while(j<=500)
	{
		n=j;
		dc=0;
		int i=1;
		while(i<=n)
		{
			if(n%i==0)
		{
			dc++;
			
		}
		i++;
		}
		if(dc==2)
		{
			printf("%d\n",n);
			
		}
		j++;
	}
	return 0;
}