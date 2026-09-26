#include<stdio.h>
void oper(int,int,char*);
int main()
{
	int a,b,res;
	char op;
	scanf("%c",&op);
	scanf("%d",&a);
	scanf("%d",&b);
	oper(a,b,&op);
	printf("Result = %d  ",op);
}
void oper(int x,int y,char*i)
{
   switch(*i)
   {
   	case '+':
   		*i=x+y;
   		break;
   	case '-':
   		*i=x - y;
   		break;
   	case '*':
   		*i=x * y;
   		break;
   	case '/':
   		*i= x / y;
   		break;
   }
}