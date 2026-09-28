 #include <stdio.h>
 int main()
 {
 	int num;
 	printf("Enter a 4 digit number....");
 	scanf("%d",&num);
 
 int frst =num/1000;
 num= num%1000;
 int scnd =num/100;
 num= num%100;
 int thrd =num/10;
 num= num%10;
 int forth =num%10;
 int swap = forth*1000 + scnd*100 + thrd*10 + frst;
 printf("=====================\n\n");
 printf("Swap number  is %d\n\n",swap);
  printf("=====================\n\n");
	 
 return 0;
}
 