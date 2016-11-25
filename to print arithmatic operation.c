/* 
Student Name: Anil Paudel
   Roll no.: 02
   Lab sheet: 05
   Program: Write a c program to print arithmatic operation.
   Date: November 25,2016
*/  

#include<stdio.h>

   int main()
   {
 float a,b,addition,subtraction,multipication,division;
 int modulus;
printf("Enter the first number:\n");
scanf("%f",&a);
printf("Enetr the second Number:\n");
scanf("%f",&b);
addition=a+b;
subtraction=a-b;
multipication=a*b;
division=a/b;
modulus=   a%b;
printf("addition:%f\n",addition);
printf("subtraction:%f\n",subtraction);
printf("multipication:%f\n",multipication);
printf("division:%f\n",division);
printf("modulus:%d\n",modulus);
    
    return 0;
  }
