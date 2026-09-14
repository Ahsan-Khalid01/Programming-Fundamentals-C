#include<stdio.h>
int main()
{
	char ab[50];
	printf("Enter  a string,,,");
	gets(ab);
	int cap=0;
	int sm=0; 
	int vc=0;
	int cc=0;
	int sp=0;
	int i=0;
	while(ab[i]!='\0')
	{
		if(ab[i]>='A' && ab[i]<='Z')
		{
			cap++;
			if(ab[i]=='A' || ab[i]=='E'|| ab[i]=='I' || ab[i]=='O'||ab[i]=='U')
			{
				vc++;
				if(ab[i]!='A' || ab[i]!='E'|| ab[i]!='I' || ab[i]!='O'||ab[i]!='U')
		 	    {
				cc++;
		     	}
		    }
		}
		if(ab[i]>='a' && ab[i]<='z')
		{
			sm++;
			if(ab[i]=='a' || ab[i]=='e'|| ab[i]=='i' || ab[i]=='o'||ab[i]=='u')
			{
				vc++;
				if(ab[i]!='a' || ab[i]!='e'|| ab[i]!='i' || ab[i]!='o'||ab[i]!='u')
		     	{
				cc++;
		    	}
	    	}
			
		}
		else 
		{
			sp++;
		}
		i++;
	}
	printf("Caital letter : %d\n",cap);
	printf("Small Letter : %d\n",sm);
	printf("Vowel  : %d\n",vc);
	printf("Consonent  : %d\n",cc);
	printf("Special symbol  : %d",sp);
	return 0;
}