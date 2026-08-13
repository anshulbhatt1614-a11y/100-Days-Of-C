/* Q8: Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal6.C -o deal6 } ; if ($?) { .\deal6 }
5
Sum=15
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal6.C -o deal6 } ; if ($?) { .\deal6 }
10
Sum=55
PS C:\Users\anshu\Anshul> */
