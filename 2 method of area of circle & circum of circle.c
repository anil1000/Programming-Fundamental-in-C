/* Student Name: Anil Paudel
   Subject: Programming Fundamental
   Roll No.: 02
   Lab Sheet:03
   Program: Write a C program to calculate the area of circle and circumference of circle, having radius r. r is taken from users.
   Date: November 18,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

  int main()
     {
   float r,circle,area;
   printf("Enter the radius:\n");
   scanf("%f",&r);
   area= PI*Pow(r,2);
   circle=2*PI*r;
   printf("\nArea of circle is:%f",area);
   printf("\nCircumference of circle is:%f",circle);
     getch();
     return 0;

     }
