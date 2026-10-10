#include<stdio.h>
#include<string.h>
struct ride
{
	int rid;
	char rname[100];	
	char rphone[100];
	char rarea[100];
	char rvehno[100];
	int rtotdel;
	char rdis[100];
	char rfuel[100];
	int rprice;
	char rstime[100];
	char retime[100];
	int rpreturn;
	int rcomp;
	char rstatus[100];
	
};
struct rider
{
	char rname[100];
	char rfname[100];
	char rcnic[100];
	char rphone[100];
	char dob[100];
	char age[100];
	char edu[100];
	char mstatus[100];
	char jdate[100];
    char wday[100];
	char yincom[100];
	char msalary[100];
	char rtype[100];
	char emcontact[100];
	char caddres[100];
	char paddress[100];
	char bgroup[100];
};
void ridedetail(ride[],int);
int main()
{
	
	printf("=============================================================================\n");
	printf("|                                                                           |\n");
	printf("|             DELIVERY RIDER DAILY TRACKING & PERFORMANCE SYSTEM            |\n");
	printf("|                                                                           |\n");
	printf("=============================================================================\n");
	printf("|             ---------------: Main Menu :----------------                  |\n");
	printf("|                                                                           |\n");
	printf("| 1  : View Rides Details                                                   |\n");
	printf("| 2  : View Riders with Full Details                                        |\n");
	printf("|                                                                           |\n");
	printf("| 3  : Search Rider By ID                                                   |\n");
	printf("| 4  : Search Rider By Name                                                 |\n");
	printf("| 5  : Search Rider By Bike No                                              |\n");
	printf("|                                                                           |\n");
	printf("| 6  : View Total Company Earning                                           |\n");
	printf("| 7  : View Total Deliveries                                                |\n");
	printf("| 8  : View Total Return Deliveries                                         |\n");
	printf("| 9  : View Total Deliveries Amount                                         |\n");
	printf("| 10 : View Total Fuel Used                                                 |\n");
	printf("| 11 : View Total Fuel Amount Per Liter                                     |\n");
	printf("|                                                                           |\n ");
	printf("| 12 : View Rider with Maximum Deliveries                                  |\n");
	printf("| 13 : view Rider with Minimum Deliveries                                   |\n");
	printf("| 14 : View Rider with Maximum Complaints                                   |\n");
	printf("| 15 : View Rider with Minimum Complaints                                   |\n");
	printf("|                                                                           |\n");
	printf("| 16 : View Rider with High Fuel Consumption                                |\n");
	printf("| 17 : view Rider with Low Fuel Consumption                                 |\n");
	printf("| 18 : View Riders Mark as Late                                             |\n");
	printf("| 19 : View Rider Shift Start and End Time                                  |\n");
	printf("|                                                                           | \n ");
    printf("| 20 : View Top 3 Performing Rider                                         |\n");
	printf("| 21 : View Rider Eligible For Bonus                                        |\n");
	printf("| 22 : View Total Bonus Amount                                              | \n");
	printf("|                                                                           |\n");
	printf("| 23 : Add New Rider Record                                                 |\n");
	printf("| 24 : Delete Rider Record                                                  |\n");
	printf("| 25 : Exit                                                                 |\n");
	printf("|                                                                           |\n");
	printf("=============================================================================\n");
	ride r[20]={
		{101,"Adil Khan","03492456765"," Jinnah Abad Mandian","KL345",500,"5000KM","500L",200,"08:00AM","06:00PM",36,43,"On Time"},
    	{102,"Waris Khan","03456754432"," Murree Road Abbottabad","JT554",400,"4500KM","480L",200,"08:00AM","06:00PM",33,41,"On Time"},
		{103,"Noman khan","03456789986"," Jinnah Abad Mabdian","TR567",476,"4800KM","499L",200,"08:00AM","06:00PM",37,44,"ON Time"},
		{104,"Adil Sultan","03424876698"," College Road Mandia","Ty234",580,"5500KM","550L",200,"08:00AM","06:00PM",49,71,"ON Time"},
		{105,"Sultan","03134476890"," Jinnah Abad Mandia","GF234",589,"6000KM","600L",200,"08:00AM","06:00PM",59,81,"On Time"},
		{106,"Sadiq Aziz","03125678908"," University Road Mandia","WQ4321",350,"3500KM","400L",200,"08:00AM","06:00PM",47,61,"Late"},
		{107,"Muhammad Ali","03156789765"," Jhangii Syedan ","Jk998",340,"3500KM","390L",200,"02:00PM","10:00PM",46,67,"Late"},
		{108,"Tahir Bashir","03116789870"," Stadium Road Abbottabad ","RF665",250,"3000KM","350L",200,"02:00PM","10:00PM",40,23,"On Time"},
		{109,"Hassan Nawaz","03123456765"," Narrii Road mandia","CJ8890",700,"7000KM","700L",200,"04:00PM","02:00AM",66,97,"On Time"},
		{110,"Malik Ubaid","03123456765"," Chinar Road Abbottabad","GL087",800,"8000KM","800L",200,"04:00PM","02:00AM",77,104,"Late"}
		
	 };
	 	 rider d[20]={
	{"Adil Khan","Shehroz Khan","13101-2167543-6","03492456765","06/May/1990","35 years","B.com","Married","19/june/2016","Monday, Tuesday, Wednessday, Thursday, Friday,","9 years","50,000Pkr","perminant","0341789543","Street#05 Sirsyed Colony College Road Mandian, Abbottabad","VC Nagri Bala ,P/O Summandar Katha District Abbottabad","A+"},
	 {"Waris Khan","Asghar Khan","13101-3245678-0","03456754432","06/April/1997","28 years","BS","Married","12/Jan/2019","Monday, Tuesday, Wednessday, Thursday, Friday,","6 years","43000Pkr","perminant","03456777413","Street#02 MusaZai Colony Mandian,Abbottabad","VC Bathyar ,P/O Narri pur District Abbottabad","A+"},
	 {"Noman Khan","Adil Khan","13101-4532456-7","03468907732","01/Feb/1986","39 years","FA","Married","01/March/2014","Monday, Tuesday, Wednessday, Thursday, Friday,","11 years","54000Pkr","Perminant","03124567897","Street#13 Akram Colony Supply,Abbottabad","VC Tatiyal ,P/O Ellahi chowk District Abbottabad ","B-"},
	 {"Adil Sultan","Sultan Shah","13101-4567890-3","03123456678","08/June/1999","26 years","M.com","UnMarried","01/Oct/2022","Monday, Tuesday, Wednessday, Thursday, Friday,","3 years","38000Pkr","Contract","03125678904","Street#01  Narri Road Mandian, Abbottabad","VC Dhamtur ,P/O dhamtur District Abbottabad","O+"},
	 {"Sultan","Muhammad Sadiq","13101-4567832-3","03156789876","09/May/1995","30 years","FA","Married","07/June/2020","Monday, Tuesday, Wednessday, Thursday, Friday,","5 years","42000Pkr","Perminant","03124567890","Street#12 Orish Colony Nawasher,Abbottabad","VC Bagnotar ,P/O Bagnotar District Abbottabad ","AB+"},
	 {"Sadiq Aziz","Aziz Ahmed ","13101-5673245-0","03456724765","08/April/1987","38 years","Matric","Married","09/March/2017","Monday, Tuesday, Wednessday, Thursday, Friday,","8 years","45000","Perminant","03166785905","Street#07 Orish Colony Nawasher, Abbottabad","VC Harno ,P/O Harnoo,Distric Abbottabad","A+"},
	 {"Muhammad Ali","Sabir Hussain","13101-786543-9","03115638890","11/Nov/2004","21 years ","Graduation Ongoing","UnMarried","08/Sep/2023","Monday, Tuesday, Wednessday, Thursday, Friday,","2 years","35000","Contract","03124567839","Street#09 Officer Colony Mandian, Abbottabad","VC Chahr, P/O Chariian, Distric Abbottabad","B-"},
	 {"Tahir Bashir","Bashir Sardar","13101-5678987-9","03168765432","12/Aug/1994","31 years","Matric","Married","11/Dec/2021","Monday, Tuesday, Wednessday, Thursday, Friday,","4 years","42000","Perminant","03145678879","Street#06  University Road Manida ,Abbottabad","VC Nathia Gali  P/O Nathia ,Distric Abbottabad","O-"},
	 {"Hassan Nawaz","Muhammad Nawaz","13101-567890-1","03448976114","10/Nov/2005","20 years","FSc","UnMarried","12/April/2024","Monday, Tuesday, Wednessday, Thursday, Friday,","1 Year","33000","Contract","03125678987","Street#09 Usman Abad Mandian, Abbottabad ","VC Mallach P/O PR Mallach, District Abbottabad","AB+"},
	 {"Malik Ubaid","Amtiaz Khan","13101-4567897-2","03145678987","06/Sep/1991","34 years","FA","Married ","01/june/2019","Monday, Tuesday, Wednessday, Thursday, Friday,","6 years","44000","Permminant","03198756412","Street#10  Phul Gulab Road Mandian, Abbottabad","VC Bagh P/O Summanadar Katha ,District Abbottabad","B+"}
};
ridedetail(r,20);
return 0;
void ridedetail(ride x[],int s);

	  for (int i=0;i<20;i++)
	 {
	 
	printf(" =================================================================\n");
	printf(" |\n"," ");
	printf(" |       ----------: Record of Rider  %d :---------\n",i);
	printf(" |%\n");
	printf(" | Rider ID           :    %d\n",r[i].rid); 
    printf(" | Rider Name         :    %s\n",r[i].rname); 
    printf(" | Rider Contact      :    %s\n ",r[i].rphone); 
    printf("| Rider Area         :   %s\n ",r[i].rarea);
    printf("| Rider Vehicle No   :    %d\n ",r[i].rvehno);
    printf("| Total delivery     :    %d\n",r[i].rtotdel);
    printf(" | Total Distance     :    %s\n",r[i].rdis);
    printf(" | Total Fuel         :    %s\n",r[i].rfuel);
    printf(" | Delivery Charges   :    %d\n",r[i].rprice);
   	printf(" | Start Time         :    %s\n",r[i].rstime);
    printf(" | End Time           :    %s\n ",r[i].retime);
    printf("| Rider Status       :    %s\n",r[i].rstatus);
	printf(" |\n");
	printf(" |\n");
	printf(" =================================================================\n");
	 
}
	
for (int i=0;i<20;i++)
{
	printf(" ===============================================================================================\n");
	printf(" |              ------------: Details of Rider %d :------------\n",i);
	printf(" |\n");
	printf(" | Name                : %s \n",d[i].rname);
	printf(" | Father Name         : %s  \n",d[i].rfname);
	printf(" | CNIC                : %s \n",d[i].rcnic);
	printf(" | Contact             : %s\n",d[i].rphone);
	printf(" | Date of Birth       : %s\n ",d[i].dob);
    printf("| Age                 : %s\n",d[i].age);
	printf(" | Education           : %s \n",d[i].edu);
	printf(" | Martial status      : %s \n",d[i].mstatus);
	printf(" | Joining Date        : %s\n",d[i].mstatus);
	printf(" | Working days        : %s\n",d[i].wday);
	printf(" | Years in Company    : %s\n",d[i].yincom);
	printf(" | Monthly salary      : %s\n",d[i].msalary);
	printf(" | Job Type            : %s\n",d[i].rtype);
	printf(" | Emergency Contact   : %s\n",d[i].emcontact);
	printf(" | Current Address     : %s\n",d[i].caddres);
	printf(" | Perminant Address   : %s\n",d[i].paddress);
	printf(" | Blood Group         : %s\n",d[i].bgroup);
	printf(" |\n");
	printf(" ===============================================================================================\n"); 
	
}
	return 0;
	
}