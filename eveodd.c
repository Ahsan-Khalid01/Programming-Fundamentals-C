#include <stdio.h>
int main()
{
	 int num;
	 printf("Entee a number....");
	 scanf("%d",&num);
	 switch (num >=0)
	 {
	 	case 1:
	 		printf("possitive number",num);
	 		break;
	 	case 0:
	 		printf("negetive number....",num);
	 		break;
	 }
}