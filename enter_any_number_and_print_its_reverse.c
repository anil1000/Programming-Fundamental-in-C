/* Student Name:ANil paudel 
   Roll No.: 05
   Lab Sheet: 18
   Program: Write a c program to enter any number & print its reverse.
   Date:13th january,2017
*/
#include<stdio.h>
int main ()
{
    int a,rem=0,rev=0;
    printf("Enter any number:\n");
    scanf("%d",&a);
    printf("The auctal given number are:%d\n",a);
    while(a>0)
    {
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	    
	}
	printf("the reverse numbers are:%d\n",rev);
		
		
		
		
		
		return 0;
}		
	    
