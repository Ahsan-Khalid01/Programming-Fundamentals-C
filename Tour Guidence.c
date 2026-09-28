#include <stdio.h>
int main()
{
	int country;
	l1:
	printf(">>>>>>> Main Menu <<<<<<<\n\n");
	printf("Select a one Option\n\n");
	printf("Press 1 for Pakistan\n");
	printf("Press 2 for China\n");
	printf("Press 3 for Australia\n");
	printf("Press 4 for Turkey\n");
	scanf("%d",&country);
	getchar;
	printf("Press enter to continue\n");
	if(country == 1)
	{
		l2:
		printf(">>>>> Pakistan <<<<<\n\n");
		printf("Here we have 4 Beautifull cities of Pakistan\n\n");
		printf("Press 1 for Islamabad\n");
		printf("Press 2 for Lahore\n");
		printf("Press 3 for Karachi\n");
		printf("Press 4 for Abbottabad\n\n");
		printf("Press 5 for back to Main Menu\n");
		int city;
		scanf("%d",&city);
		if(city== 5){
			goto l1; 
		}
		if(city == 1)
		{
			printf(">>>>> Islamabad <<<<<\n\n");
			printf("Here we have 4 Beautifull places of Islamabad\n\n");
			printf("Press 1 for Faisal Mosque\n");
			printf("Press 2 for Pakistan Monument\n");
			printf("Press 3 for Damen-e-Koh\n");
			printf("Press 4 for Rawal Lake\n\n");
            printf("Press 5 for back to City Menu\n");
            printf("Press 6 for back to Main Menu\n");
			int place;
			scanf("%d",&place);
			if(place == 5)
			{
				goto l2;
			}
			
			if(place== 6)
			{
				goto l1;
			}
		}
			
			
		}
	
}