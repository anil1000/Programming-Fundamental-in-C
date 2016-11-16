/* Student Name :Anil Paudel
   Subject:- Programming Fundamental
   Roll No. :- 02
   Lab Sheet :- 02
   Program :- Write a C program Print division of two numbers,asked from users.
   Date:- November 16,2016
 */

 #include<stdio.h>
 #include<conio.h>
 int main ()
      {
  float a,b,divide;

  printf("Enter the first number:\n");
  scanf("%f",&a);
  printf("Enter the second number:\n");
  scanf("%f",&b);

     divide= a/b;

  printf("The result of two number is:%f",divide);

    getch();
     return 0;

        }
