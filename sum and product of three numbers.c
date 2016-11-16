/* Student Name :Anil Paudel
   Subject:- Programming Fundamental
   Roll No. :- 02
   Lab Sheet :- 02
   Program :- Write a C program Print product and sum of the three number,asked from users.
   Date:- November 16,2016
 */

    #include<stdio.h>
    #include<conio.h>
      int main ()
      {
     int a,b,c,sum,product;

    printf("Enter the first no.:\n");
    scanf("%d",&a);
    printf("Enter the second no.:\n");
    scanf("%d",&b);
    printf("Enter the third no.:\n");
    scanf("%d",&c);

    sum=a+b+c;

    product=a*b*c;


    printf("The sum of three no.is:%d\n",sum);

    printf("\nThe product of three no.is :%d\n",product);
    getch ();

    return 0;

   }
