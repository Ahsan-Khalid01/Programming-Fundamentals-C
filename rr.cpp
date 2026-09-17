#include<stdio.h>
#include<string.h>
void reverse(char []);
int main()
{
	char str[10];
	printf("ENter  a string..");
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}
void reverse(char x[])
{
	char org[10];
	org[10]==x[10];
	int start =0;
	int end=strlen(x)-1;
	char temp;
	while(start < end)
	{
		temp=x[start];
		x[start]=x[end];
		x[end]=temp;
		 
		 start++;
		 end--;
	}
	if(strcmp(org[10],temp)==0)
	{
		printf("Palendrone");
   }
   else
   {
   	printf("not palendrone");
   }
}