/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
while (a != b) 
{
       if (a > b)
	   {
           a -= b;
	   }
       else
	   {
           b -= a;
	   }
   }
   printf("%d",a);
   return 0;
}
/*C:\cproject>program2_day18.out
12
18
6
C:\cproject>program2_day18.out
7
9
1
C:\cproject>*/