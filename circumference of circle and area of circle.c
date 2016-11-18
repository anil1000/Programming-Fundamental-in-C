/* Student Name: Anil Paudel
   Subject: Programming Fundamental
   Roll No.: 02
   Lab Sheet:03
   Program: Write a C program to calculate the area of circle and circumference of circle, having radius r. r is taken from users.
   Date: November 18,2016
*/
#include<stdio.h>
#include<conio.h>
  int main()
     {
   float r,circle,area;
   printf("Enter the radius:\n");
   scanf("%f",&r);
   area=(3.14)*r*r;
   circle=2*(3.14)*r;
   printf("\nArea of circle is:%f",area);
   printf("\nCircumference of circle is:%f",circle);
     getch ();
     return 0;

     }
