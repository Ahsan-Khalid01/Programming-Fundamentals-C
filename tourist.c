#include<stdio.h>
int main ()
{
	int province,city,place;
	printf("Where do you want to visit.....?\n");
	printf("\n");
	printf("Press 1 for Sindh.....\n");
	printf("Press 2 for Punjab.....\n");
	printf("Press 3 for Khyber Pakhtounkhawa.....\n");
	printf("Press 4 for Balochistan.....\n");
	
	scanf("%d,&province");
	if(province = 1)
	{
		printf("Here are the 4 most beautifull cities of Sindh\n");
		printf("\n");
		printf("*Karachii.. *Sukkkur.. *Larkana.. *Hyderabad..\n");
		printf("press 1 for Karachiii.....\n ");
		printf("press 2 for Sukkur.....\n");
		printf("press 3 for  Larkana.....\n");
		printf("press 4 for Hyderabad.....\n");
	}
		 
		 scanf("%d",&city);
		 if(city = 1)
		 {
		 	printf("Here are 4 most famous places in Karachii\n\n");
		 	printf("*Clifton Beach .. *Mazar-e-Quaid .. *Pakistan Maritime Museum .. *Port Grand ..\n");
		 }
		 printf("Press 1 for Clifton Beach..\n");
		 printf("Press 2 for Mazar-e-Quaid..\n");
		 printf("Press 3 for Pakistan Maritime Museum..\n");
		 printf("Press 4 for Port Grand..\n");

		 scanf("%d",&place);
		 if(place == 1)
		 {
		 	printf("\n");
		 	printf("CLIFTON BEACH (Karachi)\n*Location:\t\tPopular seaside attraction\n*Best Time To Visit:\t\tEvening time for sunset view\n*Activities:\t\tHorse riding,camel rides,food stalls\n*Nearby Attraction:\t\tPort Grand,Do Darya");
		 	
		 }
		 else 
		 if(place == 2)
		 {
		 	printf("\n");
		 	printf("MAZAR_E_QUAID (Karachi)\n*Location:\t\tQuaid-e-Azam Muhammad ali jannah final resting place\n*Best Time To Visit:\t\tOctober to March (cooler month)\n*Dress Code:\t\tFormal attire; cover your head and shoulders\n*Nearby Attractions:\t\tFrere Hall, National Museum of Pakistan");
		 	
		 }
		 else 
		 if(place == 3)
		 {
		 	printf("\n");
		 	printf("PAKISTAN MARITIME MUSEUM (Karachi)\n*Location:\t\tKsrschi, near PNS Karsaz\n*Best Time To Visit:\t\tOctober to March\n*Dress Code:\t\tModest clothing recommended\n*Activities:\t\tGuided tours, interactive displays, visiting galleries and exhibits\n*Nearby Attraction:\t\tNone bearby");
		 	
		 }
		 else 
		 if(place == 4)
		 {
		 	printf("\n");
		 	printf("PORT GRAND (Karachi)\n*Location:\t\tClifton karachi\n*Best Time To Visit:\t\tEvening time\n*Dress Code:\t\tCasual\n*Nearby Attraction:\t\tClifton Beach Do Darya\n*Activities:\t\tDining, shopping, entertainment, boat ride");
		 	
		 }
		 else
		 if (city = 2)
		 {
		 	printf("\n");
		 	printf("Here are the 4 most famous places of Sukkur\n\n");
		 	printf("*Sukkur Barrage .. *Lansdowne Bridge .. *Sadu Bela Temple .. *Lab-e-Mehran ..\n");
		 }
		 printf("press 1 for sakkur barrage  \n");
		 printf("press 2 for lansdowne bridge \n");
		 printf("press 3 for sadu bela temple \n");
		 printf("press 4 for lab-e-mehran \n");
		 
		 scanf("%d",&place);
		 if(place == 1)
		 {
		 	printf("\n");
		 	printf("*SUKKUR BARRAGE (Sukkur)\n*Location:\t\tsukkur sinh, pakistan\n*Best Time to Visit:\t\tOctober to march  (cooler months)\n*Nearby attraction:\t\tSukkur Museum ,saddar doaba, bucher's park");
		 	
		 }
		 else 
		 if (place == 2)
		 {
		 	printf("\n");
		 	printf("LANSDOWNE BRIDGE (Sakkur)\n*Location:\t\tsukkur sindh pakistan\n*Best Time to Visit:\t\tOctober to march (cooler months)\n*Descriptions:\t\tHistoric steel arch bridge over the indus river \n*Nearby attraction:\t\tSakkur museum, saddar doaba");
		 	
		 }
		 else 
		 if(place == 3)
		 {
		 	printf("\n");
		 	printf("SADU BELA TEMPLE (sakkur)\n*Location:\t\tSukkur sindh, pakistan\n*Best time to visit:\t\tCooler months\n*Description:\t\tAncient hindu temple located on an island in the indus river\n*Nearby attractions:\t\tSakkur barage, lansdowne bridge, sukkur museum");
		 	
        }
        else 
        if (place == 4)
        {
        	printf("\n");
        	printf("LAB_E_MEHRAN (sukkur)\n*Location:\t\tSukkur\n*Best time to visit:\t\tEvening time\n*Description:\t\tA popular rooftop resturant in sukkur, known for its food and views\n*Nearby Attractions:\t\tSukkur barage, lansdowne bridge");
        	
		}
		else 
		if(city = 3)
		{
			printf("\n");
			printf("Here is a 4 most famous places in Larkana\n\n");
			printf("*Mohenjo-Daro .. *Chandka Medical College Park .. *Jinnah Park larkana .. *Shanawaz Bhutto Library ..\n");
			
		}
		printf("press 1 for Mohenjo-Daro \n");
		printf("press 2 for Chandka medical college park\n");
		printf("press 3 for jinnah Park Larkana\n");
		printf("press 4 for Shanawaz Bhutto library\n");

		scanf("%d",&place);
		if(place == 1)
		{
			printf("\n");
			printf("MOHEMJO_DARO (Larkana)\n*Location:\t\tLarkana distric sindh\n*Best Time TO Visit:\t\tOctober to february (cooler month)\n*Description:\t\tAncient indus valley civilization site, UNESCO world heritage site\n*Nearby Attraction:\t\tLarkana museum, naearby archaeological sites");
			
		}
		else
		if(place == 2)
		{
			printf("CHANDKA MEDICAL COLLEGE PARK (Larkana)");
		}
		 
		 
	
}