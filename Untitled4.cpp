#include<stdio.h>
#include<string.h>
struct employ;
{
	int id;
	 char name[100];
	 char fname[100];
	 char cnic[100];
	 char mob[100];
	  int age;
	 char edu[100];
	 float sal;
	 float rat;
	 float bsal[100];
	 int ty;
	 
	 
	 
}
int main()
{
	employ e[10]={
		{10,"Ahmed Ali","Muhammad Ali","13101-2354667-9","03418976543",25,"BSCS",75000,3.5,30000,8},
		{11,"Hassan Khan","Ramzan ","13101-6677554-9","03456667327",28,"M.com",80000,4.2,33000,9},
		{12,"Rehan Ajmal","ajmal","13101-3456789-8","03436789054",22,"Fsc",46000,2.1,28000,2},
	    {13,"Rehman Akmal","Akmal hussain","13101-2345675-8","03423345677",31,78000,3.1,9},
	    {14,"Talha Sheraz","Sheraz khan","13101-3456789-9","03421984849",34,95000,"M.com",3.8,12},
	    {15,"Abdullah Anwar","Anwar","13101-3487986","034788933",28,65000,"BSSE",3.1,6},
	    {},
	    {},
	    {},
	    {}
	};
}
printf("======================================================================================\n");
printf("|                                                                                    |\n");
printf("|                 ------------: EMPLOYEE MANAGMENT SYSTEM :------------              |\n");
printf("|                                                                                    |\n");
printf("======================================================================================\n");
printf("| 1 Search Employe By ID                                                             |\n");
printf("| 2 search Employe By Name                                                           |\n");
printf("|                                                                                    |\n");
printf("| 3 ")
