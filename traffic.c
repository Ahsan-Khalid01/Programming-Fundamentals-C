#include <stdio.h>
int main()
{
	char light;
	printf("Press G for green\n");
	printf("Press R for red\n");
	printf("Press Y for yellow\n\n");
	printf("Enter a colour of light.........");
	scanf("%c",&light);
	switch(light)
	{
		case 'g':
			
			printf("GO");
			break;
			case 'r':
				printf("STOP");
				break;
				case'y':
					printf("WAIT");
					break;
	}
}