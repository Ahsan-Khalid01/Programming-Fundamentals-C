#include<stdio.h>
void abs(int*);
int main()
{
	int n;
	printf("        Enter  Number.");
	scanf("%d",&n);
	printf("Befor value is    %d\n",n);
	abs(&n);
	printf("\nAfter value is   %d",n);
	return 0;
}
void abs(int *a)
{
	switch(*a<0)
	{
		case1:
			*a=*a * -1;
			break;
		case 0:
			
			break;
	}
}
	