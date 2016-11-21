/* Student Name: Anil Paudel
   Roll No.: 02
   Subject: Programming Fudamental
   Labsheet: 04
   Date: November 21,2016
   Program: WAP a C program to find the area of a triangle
 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main ()
  {
  float a,b,c,side,area,E;
  printf("Enter the first side:\n");
  scanf("%f",&a);
  printf("Enter the second side:\n");
  scanf("%f",&b);
  printf("Enter the third side:\n");
  scanf("%f",&c);
  side=a+b+c;
  E=side*(side-a)*(side-b)*(side-c);
  area=pow(E,0.5);
  printf("Area of triangle is:%f",area);
     getch ();
     return 0;
     }
