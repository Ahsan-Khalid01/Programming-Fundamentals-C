 #include<stdio.h>
 void below25(int[],int[],float[],int);
 void high(int[],float[],int);
 void greater50(int[],float[],int);
 void rank(int[],float[],int[],int);
 void match(int[],int[],int);
 
 int main()
 {
 	printf("=============Cricket Player Record System============\n\n");
 	int op;
 	printf("1 : Display Players with Run Rate below 25\n");
 	printf("2 : Display Players with Highiest Run Rate\n");
 	printf("3 : Search Total Match by Player ID\n");
 	printf("4 : Count of Players with Run Rate Greater than 50\n");
 	printf("5 : Players Ranking Base on Run Rate\n");
 	printf("6 : Exit");
 	scanf("%d",&op);
 	float runrate[10]={10.5,34.3,18.0,22.5,30.5,45.5,51.5,19.6,60.2,64.3};
 	int playerid[10]={1,2,3,4,5,6,7,8,9,10};
 	int tmatch[10]={34,47,41,51,56,62,78,42,102,132};
 	int ranking[10]={500,200,400,300,250,150,100,350,50,10};
 	below25(playerid,tmatch,runrate,10);
 	high(playerid,runrate,10);
 	match(playerid,tmatch,10);
 	greater50(playerid,runrate,10);
 	rank(playerid,runrate,ranking,10);
 	return 0;
 	
 }
 void match (int p[],int t[],int s)
 {
 	
 	int id,tm;
 	printf("\n\n===Search Total Matches By Player ID=== \n\n");
 	l1:
 	printf("Enter player ID.....");
 	scanf("%d",&id);
 	for (int i=0;i<id;i++)
 	{
 	p[i]=id;
 	tm=t[i];
    }
    printf("Player ID :  %d    Match Played :  %d\n",id,tm);
    goto l1;
 
 }
 void rank(int p[],float a[],int r[],int s)
 {
 	printf("\n\n===Player Ranking===\n\n");
 	int i,j;
 	for( i=0;i<s-1;i++)
 	{
 		for ( j=0;j<s-i-1;j++)
 		{
		 if(a[j]<a[j+1])
		  {
		 	float temp_a =a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=temp_a;
		 	int temp_p=p[j];
		 	p[j]=p[j+1];
		 	p[j+1]= temp_a;
		 	int temp_r=r[j];
		 	r[j] = r[j+1];
		 	r[j+1] = temp_r;
		  }
	    }
	}
	for(i=0;i<s;i++)
	{
 		printf("Player ID : %d     RunRate : %f    Ranking : Top %d\n",p[i],a[i],r[i]);
 		
    }
    	
 }
 void greater50(int p[],float a[],int s)
 {
 	printf("\n===Players with Runrate Greater than 50===\n\n");
 	for(int i=0;i<s;i++)
 	{
 		if(a[i]>50)
 		{
 			printf("Player ID : %d   RunRate   %f\n",p[i],a[i]);
		 }
	 }
 }
 void high(int p[],float a[],int s)
 {
 	printf("\n===Player with maximum Runrate===\n\n");
 	float max=a[0];
 	int c=p[0];
 	for(int i=0;i<s;i++)
 	{
 	     if(a[i]>max)
		  {
		  	max=a[i];
		  	c=i+1;
		  }
		 	
	}
	printf("player iD : %d   RunRate  %f",c,max);
 }
 void below25(int  p[],int t[],float a[],int s)
 {
 	printf("\n===Players with Runrate Below 25===\n\n");
 	for(int i=0;i<s;i++)
 	{
 		if(a[i]<25)
 		{
 			printf("Player ID : %d      Total Match Played 	: %d      RunRate :    %f\n",p[i],t[i],a[i]);
		 }
	 }
 }