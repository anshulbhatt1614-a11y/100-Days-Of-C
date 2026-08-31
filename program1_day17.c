/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main()
{
int n,s=0,t,st;
scanf("%d",&n);
st=n;
while(st>0)
{
t=st%10;
s=s+(t*t*t);
st=st/10;
}
if(s==n)
{
printf("Armstrong");
}
else
{
printf("Not Armstrong");
}
return 0;
}
/*153
Armstrong
C:\cproject>program1_day17.out
123
Not Armstrong
C:\cproject>
*/
