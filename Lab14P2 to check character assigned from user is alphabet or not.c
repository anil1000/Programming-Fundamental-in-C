/*
   Student Name: Anil Paudel.
   Roll No.: 04
   Program: Write a C program to check character assigned from user is alphabet or not.
   Lab Sheet: 14
   Date: December 21,2016
 */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a;
     char ch;
     printf("Enter the alphabet:\n");
     scanf("%c",&ch);
     a=ch;
     if(a>=65&&a<=90||a>=97&&a<=122)
     {
         printf("The given input is alphabet\n");
     }
     else
     {
         printf("The given input is not alphabet\n");
     }
     getch();
     return 0;
 }
