/*  Student Name: Anil paudel
    Roll No:05
    Lab Sheet: 18
    Program: WAP to calculate product of digits of any number using while.
    Date:13th januray,2017
*/
#include<stdio.h>
int main()
{
	int a,product=1,last=0;
	printf("Enter any digits:\n");
	scanf("%d",&a);
	
	while(a>0)
	{
		last=a%10;
		product=product*last;
		a=a/10;
	}
	printf("product:%d\n",product);
	
	return 0;
}	
