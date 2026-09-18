#include <stdio.h>
int main()
{
	int resturant,mealtime,dishtype,spicelevel,dish;
	printf("Please Select a Resturant.......:\n");
	printf("Press 1 for Tandoori Tales\n");
	printf("Press 2 for Pasta Palace\n");
	printf("Press 3 for Sushi Central\n");
	scanf("%d",&resturant);
	if (resturant == 1)
	{
		printf("You Selected Tandoori Tales:\n\n");
		printf("please select a meal time......");
		printf("Press 1 for Breakfast\n");
		printf("press 2 for Launch\n");
		printf("press 3 for Dinner\n");
		scanf("%d",&mealtime);
		if(mealtime == 1)
		{
			printf("you selected tandoori palace breakfast time:\n\n");
			printf("please select Dish type:\n");
			printf("Press 1 for vegetarian\n");
			printf("press 2 for Non-vegetarian\n");
			scanf("%d",&dishtype);
			if(dishtype == 1)
			{
				printf("you selected tandoori palace breakfast time and dish type is Vegetarian");
			{
				if(dishtype==2)
				{
						printf("you selected tandoori palace breakfast time and dish type is Non-Vegetarian");
				}
			}
			printf("Please select Spice level\n");
			printf("Press 1 for Mild\n");
			printf("press 2 for Medium\n");
			printf("press 3 for Hot\n");
			scanf("%d",&spicelevel);
			if(spicelevel == 1)
			{
				printf("you selected tandoori palace breakfast time and dish type is Non-Vegetarianm")
			}
			
			
		}
		
	}
	
}
	
