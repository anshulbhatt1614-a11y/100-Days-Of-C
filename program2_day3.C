/*3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1*/
#include <stdio.h>
int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("After swap: %d %d",a,b);
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal4.C -o deal4 } ; if ($?) { .\deal4 }
3
5
After swap: 5 3
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal4.C -o deal4 } ; if ($?) { .\deal4 }
-1
1
After swap: 1 -1
PS C:\Users\anshu\Anshul> */
