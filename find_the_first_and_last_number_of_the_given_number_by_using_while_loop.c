/*  Student Name: Anil Paudel
    Roll No.:05
    Lab Sheet:17
    Program:WAP to find the first and last number of the given number by using while loop.
    Date:11th january,2016
*/
#include<stdio.h>
int main()
{
     int i,a,last=0;
     printf("Enter the any digits:\n");
     scanf("%d",&a);
     last=a%10;
	printf("last:%d\n",last);
     
     
    while(i<4)
     {
		 
		a=a/10;
		i++;
	}
	printf("first:%d\n",a);
	
	return 0;
}
		 

