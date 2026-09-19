#include<stdio.h>
int main()
{
	int s=10;
	float *sbr[s];
	for(int i=1;i<=s; i++)
	{
		printf("%f\n",*sbr[0]);
	}
}