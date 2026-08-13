/*Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212*/
#include <stdio.h>
int main()
{
    float n,m;
    scanf("%f",&n);
    m=(9/5.0f)*n+32.0f;
    printf("Farhenite=%.2f",m);
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal3.C -o deal3 } ; if ($?) { .\deal3 }
0
Farhenite=32.00
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal3.C -o deal3 } ; if ($?) { .\deal3 }
100
Farhenite=212.00
PS C:\Users\anshu\Anshul> */
