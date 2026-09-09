#include<stdio.h>
int main()
{
	int str[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter a string [%d] [%d].....",i,j);
			scanf("%d",&str[i][j]);
		}
	}
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<3;b++)
		{
			printf("%d ",str[a],str[b]);
		}
		printf("\n");
	}
	return 0;
}