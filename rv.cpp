#include<stdio.h>
void reverse(char[]);
int main()
{
	char str[10];
	printf("Enter a string\n");
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}
void reverse(char x[])
{
	int i=0, j=0;
	char temp;
	while(x[j]!='\0')
	{
		j++;
	j--;
}
	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}
}