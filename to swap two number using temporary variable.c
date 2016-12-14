/* Student Name: Anil Paudel
   Roll No.:04
   Lab Sheet: 13
   Program: Write a C program to swap two number using temporary variable.
   Date:December 14, 2016
   */
   #include<stdio.h>
   #include<conio.h>
   int main ()
   {
      int a,b,temp;
      printf("ENter the first number:\n");
      scanf("%d",&a);
      printf("Enter the second number:\n");
      scanf("%d",&b);

       printf("before the swap number:%d\n",a);
        printf("before the swap number:%d\n",b);

      temp=a;
      a=b;
      b=temp;

      printf("After the swap number:%d\n",a);
        printf("After the swap number:%d\n",b);
      getch ();
      return 0;
       }
