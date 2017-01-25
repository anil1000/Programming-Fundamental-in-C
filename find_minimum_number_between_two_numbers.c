/* Student Name: Anil Paudel
   Roll No.:05
   Lab Sheet: 
   Program: WAP to find minimum number between two numbers.
   (function without argument but with return type.)
   Date: 25th January,2017
*/
#include<stdio.h>
int minimum();
int main ()
{
	
	int result;
	result=minimum();
	printf("The minimum no. is:%d",result);
	return 0;
}

int minimum()
{
	int a,b;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	if (a<b)
	return a;
	else
	return b;
}
