#include<stdio.h>
int main()
{
	
	int sal,exp,bonus,newsal;
	printf("Enter your salary...");
	scanf("%d",&sal);
	printf("Enter the years of experience...");
	scanf("%d",&exp);
	if(exp>=2 && exp<=5)
	{
	bonus=sal*0.10;
	printf("New salary is %d",&newsal)
	}
	
	else 
	if(exp>5)
	{
		bonus=sal*0.20;
		printf("New salary is %d",&newsal);
	}
	else 
	if(exp<2)
	{
		printf("No bonus is added")
	}
	return 0;
}