/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/
#include <stdio.h>
int main()
{
int n,h,m,s;
scanf("%d",&n);
h=n/3600;
m=(n%3600)/60;
s=(n%3600)%60;
printf("%d:%d:%d",h,m,s);
return 0;
}
/*PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
3661
1:1:1
PS C:\Users\anshu\Anshul> cd "c:\Users\anshu\Anshul\" ; if ($?) { gcc deal.C -o deal } ; if ($?) { .\deal }
7322
2:2:2*/
