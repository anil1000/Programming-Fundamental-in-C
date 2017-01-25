/* Student Name: Anil Paudel
   Roll No.:05
   Lab Sheet: 
   Programe: WAP to ask radius of cicle in main function &calculate area of circlr & display the area in area function.
   (function with argument and no return type.)
   Date: 25th January,2017
*/
#include<stdio.h>
#define PI 3.14
void area(float r);
int main()

{
	float a;
	printf("Enter the radius:\n");
	scanf("%f",&a);
    area(a);
    return 0;
    ;
}

 void area (float r)
 {
	 float area1;
	 area1=PI*r*r;
	 printf("The area of circle is:%f",area1);
 }
