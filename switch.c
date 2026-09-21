#include<stdio.h>
int main()
{
	int n1,n2;
	char op;
	printf("Enter a operation.......");
	scanf("%c",&op);
	printf("Enter a first number.....");
	scanf("%d",&n1);
	printf("Enter a second number.....");
	scanf("%d",&n2);
	switch(op)
	{
		case '+':
			{
			int sum = n1 + n2;
			
			printf("%d + %d = %d",n1,n1,sum);
			}
			break;
			case '-':
				{
				int sub = n1 - n2;
				printf(" %d - %d = %d ",n1,n2,sub);
				}
				break;
				case '*':
					{
					
					int mul = n1 * n2;
					printf("%d * %d = %d",n1,n2,mul);
					}
					break;
					case '/':
						{
						int div = n1 / n2;
						printf("%d / %d = %d",n1,n2,div);
						}
						break;
					
		
	}
}