#include<stdio.h>
int main()
{
	int num,sum;
	lb1:
	printf("Enter a Number");
	scanf("%d",&num);
	if(num>0)
	{
		goto lb1;
	}
	else
	{
	sum =num+num;	
	}
	printf("%d",sum);
}