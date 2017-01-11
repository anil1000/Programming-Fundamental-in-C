/*  Student Name: Anil Paudel
    Roll No.:05
    Lab Sheet:17
    Program:WAP to count number of digit of any number using do while.
    Date:11th january,2016
*/
#include<stdio.h>
int main()
{
     int a=0,last=0,count=0;
     printf("Enter the any digits:\n");
     scanf("%d",&a);
     last=a%10;
	printf("last:%d\n",last);
     
     do{
		 a=a/10;
		  count++;
	 }
    while(a>0);
     
		  
	
	printf("first:%d\n",a);
	printf("count:%d",count);
	return 0;
}
		 
