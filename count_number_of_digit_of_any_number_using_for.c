/*  Student Name: Anil Paudel
    Roll No.:05
    Lab Sheet:17
    Program:WAP to count number of digit of any number using for.
    Date:11th january,2016
*/
#include<stdio.h>
int main()
{
     int a=0,last=0,i=0,count=1;
     printf("Enter the any digits:\n");
     scanf("%d",&a);
     last=a%10;
	printf("last:%d\n",last);
	i=a;
     for(i=1;i<a;i++)
     {
		  a=a/10;
		  count++;
	}
	
	printf("first:%d\n",a);
	printf("number are:%d",count);
	
	
	return 0;
}
		 
