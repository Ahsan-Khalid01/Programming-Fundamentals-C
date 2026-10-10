#include<stdio.h>
int main()
{
	
	float sal,bonus=0.00;
	int exp,newsal;
	printf("Enter your salary...");
	scanf("%f",&sal);
	printf("Enter the years of experience...");
	scanf("%d",&exp);
	if(exp>=2 && exp<=5)
	{
	bonus=sal*0.10;
	newsal=sal+bonus;
	printf("============================================================\n\n");
	printf(" Congratulations: 10 Percent Bonus is Added to Your Salary \n\n");
	printf(" New Salary is %d \n\n",newsal);
	printf("============================================================\n");
	}
	
	else 
	if(exp>5)
	{
		bonus=sal*0.20;
		newsal=sal+bonus;
		printf("============================================================\n\n");
		printf("Congratulations:20 Percent Bonus is Added to Your Salary \n\n");
		printf("New Salary is %d \n\n",newsal); 
		printf("============================================================\n");
	}
	else 
	if(exp<2)
	{
		printf("============================================================\n\n");
		printf("\n Unfortunately: No Bonus is Added\n\n");
		printf("============================================================\n\n");
	}
	return 0;
}