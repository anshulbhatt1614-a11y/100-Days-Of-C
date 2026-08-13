/*Input 1:
5 10
Output 1:
Area=50, Perimeter=30
Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Area=%d, Perimeter=%d",a*b,2*(a+b));
    return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
5
10
Area=50, Perimeter=30
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
3
7
Area=21, Perimeter=20
PS C:\Users\anshu\Anshul> 
*/
