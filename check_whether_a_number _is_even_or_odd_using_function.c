/* Student Name: Anil Paudel
   Roll No.:05
   Lab Sheet: 22
   Program: WAP to check whether a number4 is even or odd using function.
   (function with argument and with return type.)
   Date: 25th January,2017
*/
#include<stdio.h>
int check( int a);
int main()
{
	int a,result;
	printf("Enter the number:\n");
	scanf("%d",&a);
	result= check(a);
	if(result==0)
	printf("THe no. is even");
	else
	printf("The no. is odd");
	return 0;
}
int check(int a)
{
	if(a%2==0)
	return 0;
	else
	return 1;
}

	
