/* Student Name: Anil Paudel
   Roll No.:05
   Lab Sheet: 
   Programe: WAP to enter two number and find the sum using function(function with no argument and no return type.)
   Date: 25th January,2017
*/
#include<stdio.h>
void sum();
int main ()   
{
	sum();
	
}
void sum()
{
	int a,b,add;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	add=a+b;
	printf("THe sum of two number is:%d",add);
	
}

