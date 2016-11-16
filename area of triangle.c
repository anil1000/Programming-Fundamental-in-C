/* Student Name :Anil Paudel
   Subject:- Programming Fundamental
   Roll No. :- 02
   Lab Sheet :- 02
   Program :- Write a C program Print area of triangle; base and height are asked from users.
   Date:- November 16,2016
 */
  #include<stdio.h>
  #include<conio.h>
    int main ()
    {
    float b,h,area=0;

    printf("Enter the base:\n");
    scanf("%f",&b);
    printf("Enter the height:\n");
    scanf("%f",&h);
    area= 0.5*b*h ;
    printf("The area of a triangle is:%f",area);

    getch ();
     return 0;

      }
