#include<stdio.h>
int main()
{
	char stri[10];
	for(int a=0;a<10;a++)
	{	
	printf("Enter sstring....");
	scanf("%s",stri[a]);
   }
	int c=0;
	int i=0;
	while (stri[i]!='\0')
	{
		c++;
		i++;
	}
	printf("%d",c);
	return 0;
}