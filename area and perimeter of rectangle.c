/*
   Student name : Anil Paudel
   Roll: 02
   Subject:Programming Fundamental
   Program: WAP a C program to print area and perimeter of rectangle.
   Lab sheet :04
*/
#include<stdio.h>
#include<conio.h>
  int main()
     {
  float l,b,area,perimeter;
  printf("Enter the length:\n");
  scanf("%f",&l);
  printf("Enter the breadth:\n");
  scanf("%f",&b);
  area=l*b;
  perimeter=2*(l+b);
  printf("\nThe area of rectangle is: %f\n",area);
  printf("The perimeter of rectangle is: %f",perimeter);
    getch ();
    return 0;
     }
