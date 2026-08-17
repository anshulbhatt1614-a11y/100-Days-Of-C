/*
Q16: Write a program to input three numbers and find the largest among them using if–else.
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main()
{
   int a,b,c,l;
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c)
   {
      l=a;
   }
   else if(b>a && b>c)
   {
      l=b;
   }
   else
   {
      l=c;
   }
   printf("Largest is %d",l);
   return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
3
7
5
Largest is 7
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
-1
-5
0
Largest is 0
PS C:\Users\anshu\Anshul> */
