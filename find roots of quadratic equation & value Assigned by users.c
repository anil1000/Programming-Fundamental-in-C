/* Student Name: Anil Paudel
   Roll No.: 02
   Lab sheet :04
   Program: Write a program to find roots of quadratic equation and value are assigned from users.
   Date : November 23,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

  int main()
    {
  float x1=0,x2=0,a,b,c,dis=0;
printf("Enter first the number:\n");
scanf("%f",&a);
printf("Enter second the number:\n");
scanf("%f",&b);
printf("Enter third the number:\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x1=(-b+pow(dis,0.5))/(2*a);
x2=(-b-pow(dis,0.5))/(2*a);
printf("The value of x1 is :%f\n",x1);
printf("The value of x2 is :%f\n",x2);
     getch();
     return 0;

  }
