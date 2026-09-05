#include<stdio.h>
int first(int);
int last(int);
int main()
{
	int num;
	printf("Enter  a Number...");
	scanf("%d",&num);
	int f=first(num);
	int l=last(num);
	printf("First Number :    %d\n",f);
	printf("Last Number  :    %d\n",l);
	return 0;
	
}
int first(int x)
{
	int t;
	t=x/10;
	return t;
}
int last(int x)
{
	int g;
	g=x%10;
	return g;
}