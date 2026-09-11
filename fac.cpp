#include<stdio.h>
 //int fact(int);
int main()
{
	int n;
	printf("Enter number...");
	scanf("%d,&n");
	//
	while(n>1)
	{
		int fac=1;
		fac=fac*n;
		n--;
		
	}
//	int r=fact(n);
	printf("Factorial of Number  :   is = %d   ",n);
	return 0;
}
