/* Student Name: Anil Paudel
   Roll No.: 05
   Lab Sheet:
   Program: WAP to find factorial of given number recurison function.
   Date:29 January 2017
*/
#include<stdio.h>
int fact(int n);
int main()
{
	int num=0,f;
	printf("Enter a number:");
	scanf("%d",&num);
	f=fact(num);
	printf("factorial of %d is %d",num,f);
	return 0;
}
int fact(int n)
{
	if(n==1)
	return 1;
	else 
	return(n*fact(n-1));
}
