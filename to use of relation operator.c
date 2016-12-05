/*
  Student Name: Anil Paudel.
  Roll No.:04
  Lab Sheet:10
  Program: WAP to use of relation operator.
  Date:December 05,2016
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
    float a;
    printf("Enter the first number:\n");
    scanf("%f",&a);
if(a>=80 && a<100){
    printf("Distinction:\n ");
}

if(a>=60 && a<80){
    printf("First division:\n");

}
if(a>=40 && a<60){
    printf("Second division:\n");
}
if(a>=0 && a<40){
    printf("fail:\n");
}
  return 0;
}
