/*  Student Name: Anil paudel
    Roll No:05
    Lab Sheet: 18
    Program: WAP to calculate sum of digits of any number using for.
    Date:13th januray,2017
*/
#include<stdio.h>
int main()
{
	int a,sum=0,i=0,last=0;
	printf("Enter any digits:\n");
	scanf("%d",&a);
	
	for(i=1;i>0;i++)
	{
		last=a%10;
		sum=a+last;
		a=a/10;
	}
	
	return 0;
}	
	
	
	
       
