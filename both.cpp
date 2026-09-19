#include<stdio.h>
void both(int,int*,int*);
int main()
{
	int a,dou,tri;
	scanf("%d",&a);
	printf("Number  =  %d\n\n",a);
	both(a,&dou,&tri);
	printf("Double of number  %d  = %d \n\n",a,dou);
	printf("Triple of number  %d  = %d \n",a,tri);
	return 0;
}
void both(int x,int*du,int*tr)
{
	*du=x+x;
	*tr=x+x+x;
}