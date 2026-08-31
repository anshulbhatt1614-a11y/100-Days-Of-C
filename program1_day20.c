/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
int p=1,n,t;
scanf("%d",&n);
while(n>0)
{
t=n%10;
if(t%2!=0)
{
p=p*t;
}
n=n/10;
}
printf("%d",p);
return 0;
}
/*C:\cproject>program1_day20.out
12345
15
C:\cproject>program1_day20.out
2468
1
C:\cproject>*/