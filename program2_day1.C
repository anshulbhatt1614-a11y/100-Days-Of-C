/*
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("INVALID INPUT");
        return 0;
    }
    printf("Sum=%d, Diff=%d, Product=%d ,Quotient=%d",a+b,a-b,a*b,a/b);
    return 0;
}
/* C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc program1_day2.C -o program1_day
 } ; if ($?) { .\program1_day2 }
  10
  2
Sum=12, Diff=8, Product=20 ,Quotient=5
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc program1_day2.C -o program1_day2 } ; if ($?) { .\program1_day2 }
7
3
Sum=10, Diff=4, Product=21 ,Quotient=2
PS C:\Users\anshu\Anshul> */
