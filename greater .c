#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter a fisrt number\n");
	scanf("%d",&n1);
	printf("Enter second number\n");
	scanf("%d",&n2);
	printf("Enter a third number\n");
	scanf("%d",&n3);
	if(n1>n2 && n1 >n3)
	{
		if(n2>n3)
		{
			printf("%d %d %d",n1,n2,n3);
		}else{
			printf("%d %d %d",n1,n3,n2);
		}	
	}else
	if (n2>n3)
	{
		if(n3>n1)
		{
			printf("%d %d %d",n2,n3,n1);
		}
		else{
			printf("%d %d %d",n2,n1,n3);
		}
		
		
	}
	else
	if(n3>n2)
	{
		if(n2>n1)
		{
			printf("%d %d %d ",n3,n2,n1);
		}
		else
		{
			printf("%d %d %d",n3,n1,n2);
		}
	}
	return 0;
}