#include<stdio.h>
void reverse(char[]);
int main()
{
	char str[10];
	printf("Enter string\n");
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}
void reverse(char x[])
{
int a=0;
int b=0;
	char temp=0;
	temp=x[a];
	x[a]=x[b];
	x[b]=temp;
}