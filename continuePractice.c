#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter a number1.....");
	scanf("%d",&num1);
	while(1)
	{
		printf("Enter a number2....");
		scanf("%d",&num2);
		if(num2==0)
		{
			continue;
			
		}
		else
		{
			printf("%d / %d = %d",num1,num2,num1/num2);
		}
		break;
		
	}
	return 0;
}