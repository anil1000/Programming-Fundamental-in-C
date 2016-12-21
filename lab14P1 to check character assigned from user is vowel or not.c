/*
   Student Name: Anil Paudel.
   Roll No.: 04
   Program: Write a C program to check character assigned from user is vowel or not.
   Lab Sheet: 14
   Date: December 21,2016
 */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     char c;
     printf("Enter the alphabet:\n");
     scanf("%c",&c);
     if(c =='a'||c =='A'||c =='e'||c =='E'||c =='i'||c =='I'||c =='o'||c =='O'||c =='u'||c =='U')
       {
         printf("The given alphabet is vowel");
     }
     else
     {
         printf("The given alphabet is not vowel");

     }
     getch();
     return (0);
 }

