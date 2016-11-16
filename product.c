/* Student Name :Anil Paudel
   Subject:- Programming Fundamental
   Roll No. :- 02
   Lab Sheet :- 02
   Program :- Write a C program Print product of two numbers,asked from users.
   Date:- November 16,2016
 */

  #include<stdio.h>
  #include<conio.h>
    int main ()
    {
    int a,b,product ;

    printf("Enter the First no.\n");
    scanf("%d",&a);
    printf("Enter the Second no.\n");
    scanf("%d",&b);
    product = a*b;
    printf(" Product of two number is:%d",product);
    getch ();
    return 0;
    }


