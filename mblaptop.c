#include <stdio.h>
int main()
{
	int ch,mch,lch;
	printf("Main Menu\n");
	printf(" Mobile     :      Laptop\n");
	printf("press 1 for mobile\nPress 2 for laptop");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("select a mobile\n");
			printf("samsung  :   iphone\n");
			printf("Press 1 for samsung\npress 2 for iphone\n");
			scanf("%d",&mch);
			switch(mch)
			{
				case 1:
					printf("Mobile   samsung");
					break;
				case 2:
					printf("Mobile Iphone");
					break;
					
	    			
			}
			break;
		case 2:
		      printf("select a laptop\n");
			  printf("Dell    :       HP\n");
			  printf("press 1 for Dell\nPress 2 for HP\n");
			  scanf("%d",&lch);
			  switch(lch)
			  {
			  	case 1:
			  		printf("Laptop   dell");
			  		break;
			  	case 2:
			  		printf("Laptop Hp");
			  		break;
		break;  		
			  }
			  
		
	}
	
}