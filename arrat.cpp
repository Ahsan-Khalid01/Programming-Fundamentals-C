#include<Stdio.h>
void element(float[],int);
void avg(float[],int);
//void below(float[],int);
//void up(float[],int);
int main()
{
	float arr[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter the Element of array %d \n",i);
		scanf("%f",&arr[i]);
	}
	while(1)
	{
	
	int op;
	printf("=============================================\n\n");
	printf(" 1 : print All Element\n");
	printf(" 2 : total average \n");
	printf(" 3 : Below average \n");
	printf(" 4 : Up the average \n");
	printf("\n\n==============================================\n");
	printf("Enter a choice......");
	scanf("%d  ",&op);

	if(op==1)
	{
		element(arr,5);
	}
	if(op==2)
	{
		avg(arr,5);
	}
//	if(op==3)
	//{
	//	below(arr,5);
//	}
	//if(op==5)
	//{
//		up(arr,5);
	//}
	//else{
		//printf("Invalid ");
//]	}
}
	return 0;
}


void avg(float x[],int s)
{
	float sum=0.0;
	float avg;
	for(int i=0;i<s; i++)
	{
		sum=sum+x[i];
	}
	avg=sum/5;
	printf("Average : %f\n\n",avg);
}
void element(float x[],int s)
{
	for(int i=0;i<s;i++)
	{
		printf("THe element of array %d  = %f\n",i,x[i]);
	}
}