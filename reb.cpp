#include<stdio.h>
void rev(int);
int main()
{
	int num;
	printf("enter  number.....");
	scanf("%d",&num);
	rev(num);
	return 0;
}
void rev(int x)
{
	int org=x;
	int rev=0;
	while(x>0)
	{
		int d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	printf("Orignal Number  :   %d\nReverse Number   :  %d\n",org,rev);
	if(rev==org)
	{
		printf("Number is Palendorne");
	}
	else
	{
		printf("Not Palendrone");
		
	}
	
}