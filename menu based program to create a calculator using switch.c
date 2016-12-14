/* Student Name: Anil Paudel.
   Roll No.:04
   Lab Sheet:13
   Program: Write a menu based program to create a calculator using switch.
   Date: December 14,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,add,sub,multiply,division;
    printf("\t\t********************************\n");
    printf("\t\t***##########################***\n");
    printf("\t\t***#    Simple Calculator   #***\n");
    printf("\t\t********************************\n");
    printf("\t\t********************************\n");
    printf("\t\t***#   Choose From Number   #***\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Choose the number??:");
    scanf("%d",&n);

switch(n){
case 1:
         printf("Enter the first number:\n");
         scanf("%d",&a);
         printf("Enter the second number:\n");
         scanf("%d",&b);
         add=a+b;
         printf("The addition of two no. is:%d\n",add);
         break;
case 2:
         printf("Enter the first number:\n");
         scanf("%d",&a);
         printf("Enter the second number:\n");
         scanf("%d",&b);
         sub=a-b;
         printf("The Subtraction of two no. is:%d\n",sub);
         break;
         case 3:
         printf("Enter the first number:\n");
         scanf("%d",&a);
         printf("Enter the second number:\n");
         scanf("%d",&b);
         multiply=a*b;
         printf("The multiply of two no. is:%d\n",multiply);
         break;
case 4:
         printf("Enter the first number:\n");
         scanf("%d",&a);
         printf("Enter the second number:\n");
         scanf("%d",&b);
         division=a/b;
         printf("The division of two no. is:%d\n",division);
         break;

default:
      printf("***# Thank You for Visiting#***");


       }
       getch();
       return 0;



}
