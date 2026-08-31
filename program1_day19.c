/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int n1=a,n2=b;
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
   printf("%d",(n1*n2)/a);
   return 0;
}
/*
C:\cproject>program1_day19.out
4
5
20
C:\cproject>
C:\cproject>program1_day19.out
7
3
21
C:\cproject>*/