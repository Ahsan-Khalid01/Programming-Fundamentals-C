#include <stdio.h>
int main()
{
	char ch;
	l1:
	printf("Enter a character\n");
	scanf("%c",&ch);
	if(ch!= '*')
	{
		if(ch == 'A' && ch == 'Z')
		{
			printf("Uppper case\n");
		}
		if(ch == 'a' && ch == 'z')
        { 
        printf("lower case\n");
        
		}
		if(ch>= '0' && ch <='9')
		
		{
			printf("digit\n");
		}
		else 
		{
			printf("special symbol\n");
		}
		goto l1;		
	
	}
}