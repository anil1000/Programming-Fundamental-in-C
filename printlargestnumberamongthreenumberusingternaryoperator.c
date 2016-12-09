/* Student Name:- Anil Paudel
   ROll NO.:- 04
   Program: WAP to print largest number among three number using ternary operator.
   Lab Sheet:11
   Date:Decmeber 9,2016
*/   
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	printf("Enter the third number:\n");
	scanf("%d",&c);
	if(a>=b && a>=c){
		printf(" a is greater");
	}
    else if (b>=a && b>=c){
		printf(" b is greater");
	}
	else {
		printf(" c is greater ");
	}
	return 0;
}		
