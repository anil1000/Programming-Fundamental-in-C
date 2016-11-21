/*
   Student name : Anil Paudel
   Roll: 02
   Subject:Programming Fundamental
   Program: WAP a C program to print the area of trapezium of triangle
   Lab sheet :04
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
float a,b,h,area;
printf("Enter the first number:\n");
scanf("%f",&a);
printf("Enter the second number:\n");
scanf("%f",&b);
printf("Enter the height :\n");
scanf("%f",&h);\
area=0.5*(a+b)*h;
printf("the area of trapezium of triangle is: %f",area);
getch();
return 0;

}
