#include<stdio.h>
void vowl(char []);
int main()
{
	char str[100];
	printf("Enter  a string  \n");
	gets(str);
	vowl(str);
	puts(str);
	return 0;
	
}
void vowl(char x[])
{
	int vc=0;
	for(int i=0;i<'\0';i++)
	{
		if(x[i]=='a' || x[i]=='e'|| x[i]=='i'|| x[i]=='u'|| x[i]=='o')
		{
			vc++;
		}
		printf("vowel Count = : %d",vc);
	}

}