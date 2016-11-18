/* Student Name: Anil Paudel
   Subject: Programming Fundamental
   Roll No.: 02
   Lab Sheet:03
   Program: Write a C program to print the sum of two numbers, asked from users.
   Date: November 18,2016
*/
#include<stdio.h>
#include<conio.h>
   int main()
      {
   float p,t,r,interest;
printf("Enter the Principle:\n");
scanf("%f",&p);
printf("Enter the time:\n");
scanf("%f",&t);
printf("Enter the rate:\n");
scanf("%f",&r);

 interest= p*t*r/100;
printf("Simple Interest is:%f",interest);
   getch();
   return 0;


      }
