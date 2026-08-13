/*Q7: Write a program to swap two numbers without using a third variable.
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %d %d",a,b);
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal5.C -o deal5 } ; if ($?) { .\deal5 }
10
20
After swap: 20 10
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal5.C -o deal5 } ; if ($?) { .\deal5 }
7
14
After swap: 14 7
PS C:\Users\anshu\Anshul> */
