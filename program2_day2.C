/*Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
int main()
{
    float r,a,c;
    scanf("%f",&r);
    a=3.1416f*r*r;
    c=2.0f*3.1416f*r;
    printf("Area=%.2f, Circumference=%.2f",a,c);
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal2.C -o deal2 } ; if ($?) {.\deal2 }
7
Area=153.94, Circumference=43.98
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal2.C -o deal2 } ; if ($?) {.\deal2 }
3
Area=28.27, Circumference=18.85
PS C:\Users\anshu\Anshul> 
*/
