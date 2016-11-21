/*
   Student name : Anil Paudel
   Roll: 02
   Subject:Programming Fundamental
   Program: WAP a C program to print area and volume of sphere.
   Lab sheet :04
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
  int main()
  {
  float r,area,volume;
  printf("Enter the radius:\n");
  scanf("%f",&r);
  area=4*PI*pow(r,2);
  volume=(1.33)*PI*pow(r,3);
  printf("The area of sphere is:%f\n",area);
  printf("The volume of sphere is:%f",volume);
     getch ();
     return 0;
  }
