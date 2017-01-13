/* Student Name:ANil paudel 
   Roll No.: 05
   Lab Sheet: 18
   Program: Write a c program to check whether the given number is palildrome or not.
   Date:13th january,2017
*/
#include<stdio.h>
int main()
{ 
     int a,rev=0,rem=0,num=0;
     printf("Enter any number:\n");
     scanf("%d",&a);
     printf("The autal given number is :%d\n",a);
     num=a;
     while(a>0)
     {
		 rem=a%10;
		 rev=rev*10+rem;
		 a=a/10;
      }
		  printf("The reverse number are:%d\n",rev);
	  if(num==rev)
	  {
      printf("The given number is palildrome\n");
      }
      else 
      {
         printf("The given number is not palildrome\n");   
       }
       return 0;
   }
     
