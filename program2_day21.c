/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
int n,i=1,s=0;
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
s=s+i;
}
i++;
}
if(s==n)
{
printf("Perfect Number");
}
else
{
printf("Not perfect number");
}
return 0;
}
/*C:\cproject>program2_day21.out
6
Perfect Number
C:\cproject>program2_day21.out
10
Not perfect number
C:\cproject>*/