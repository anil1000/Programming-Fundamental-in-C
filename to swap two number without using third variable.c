/* Student Name: Anil Paudel.
   Roll No.:04
   Lab Sheet:13
   Program: Write a C program to swap two number without using third variable.
   Date: December 14,2016
   */

   #include<stdio.h>
   #include<conio.h>
   int main()
   {
       int a,b;
       printf("Enter the first number:\n");
       scanf("%d",&a);
       printf("Enter the second number:\n");
       scanf("%d",&b);


       printf("Before the swap number:%d\n",a);
       printf("Before the swap number:%d\n",b);


       a=a-b;
       b=a+b;
       a=b-a;

       printf("After the swap number:%d\n",a);
       printf("After the swap number:%d\n",b);

       getch();
       return 0;



   }
