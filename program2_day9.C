/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>89 && n<101)
   {
      printf("Grade A");
   }
   else if(n>79 && n<90)
   {
      printf("Grade B");
   }
   else if(n>69 && n<80)
   {
      printf("Grade C");
   }
   else if(n>59 && n<70)
   {
      printf("Grade D");
   }
   else
   {
      printf("Grade F");
   }
   return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
95
Grade A
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
82
Grade B
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
68
Grade D
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
50
Grade F
PS C:\Users\anshu\Anshul> */
