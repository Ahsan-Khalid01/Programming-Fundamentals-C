#include <stdio.h>
int main()
{
	int resturant; 
	char mtime,dish,dishtype,spicelevel;
	printf("==================================\n");
	printf("|     Enter your Choice:         |\n|                                |\n");
	printf("| Press 1 for Tandori Tales      | \n| Press 2 for Pasta Palace       |\n| Press 3 for Sushi Central      |\n");
	printf("==================================");
	scanf("%d",&resturant);
	switch(resturant)
	{
		case 1:
		
		printf("You Selected Tandori Tales:\n");
		printf("  Select a Meal Time\n\n");
		printf("Press B for breakfast\n");
		printf("Press L for Lunch\n");
		printf("Press D for Dinner");
		scanf("%c",&mtime);
		
		break;

	
	   		switch(mtime)
			{
				case 'b':
				printf("You Selected Tandori Place Breakfast Time:\n");
				break;
		
				switch(dishtype)
				{
				    printf("Please Select a Dish Type:\n");
				    printf("Press V for Vegeratian\n");
				    printf("Press N for Non-vegetarian\n");
				    scanf("%c",&dishtype);
				  
				    case 'v':
				    	printf("You Selected Tandori Tales Breakfast Time and Dish type is Vegetarian:\n");
				      	break;
				   	case 'n':
			      	    printf("You Selected Tandori Tales Breakfast Time and Dish type is Non-Vegetarian:\n");
			      	    break;
			    
				
			    	switch(spicelevel)
			    	{
				 	printf("Please Select a Spice Level:\n\n");
					printf("Press M for mild\n");
					printf("press D for Medium\n");
					printf("Press H for Hot\n");
					scanf("%c",&spicelevel);
						case 'm':
							printf("You Selected Tandori Tales Breakfast Time and Dish type is Vegetarian Spice Level Mild\n");
							break;
						case 'd':
							printf("You Selected Tandori Tales Breakfast Time and Dish type is Vegetarian Spice Level Medium\n");
							break;
						case'h':
					 		printf("You Selected Tandori Tales Breakfast Time and Dish type is Vegetarian Spice Level Hot\n");
							break;
			    	}
					break;
				
				
	      		}
		    	break;	
			}
			break;	
	}
	break;
	 
} 