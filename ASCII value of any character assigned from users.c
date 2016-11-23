/* Student Name: Anil Paudel
   Roll No.: 02
   Lab sheet :04
   Program: Write a program to find ASCII value of any character assigned from users.
   Date : November 23,2016
*/
#include<stdio.h>
#include<conio.h>
   int main()
      {
   char character;
   int ascii;
   printf("Enter a character:\n");
   scanf("%c",&character);
   ascii= character;
   printf("The value of ASCII is :%d",ascii);
   getch();
   return 0;
      }


