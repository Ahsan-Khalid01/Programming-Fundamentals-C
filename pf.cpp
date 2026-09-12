#include<stdio.h>
int main()
{
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++)	
	{
		printf("Enter the value of element [ %d ]......",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];	
	}
	printf("sum === %d",sum);
}