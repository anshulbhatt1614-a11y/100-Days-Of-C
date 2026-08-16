/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%4==0 && n%100!=0) || n%400==0)
    {
      printf("Leap year");
    }
    else 
    {
        printf("Not a leap year");
    }
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
2020
Leap year
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
1990
Not a leap year
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
2000
Leap year*/
