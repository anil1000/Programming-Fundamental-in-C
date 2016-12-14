/* Student Name: Anil Paudel.
   Roll No.:04
   Lab Sheet:13
   Program: Write a C program to check whether a number is divisible by 5 & 11 or not.
   Date: December 14,2016
   */

   #include<stdio.h>
   #include<conio.h>
   int main()
   {
       int a;
       printf("Enter the number:\n");
       scanf("%d",&a);
       if(a%5==0 && a%11==0){
           printf("The no. is divisible by 5 & 11");
       }
       else
       {
           printf("The no. is not divisible by 5 & 11");
       }
       getch ();
       return 0;
   }
