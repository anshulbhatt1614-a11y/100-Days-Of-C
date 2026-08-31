/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
int i,f=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
f++;
}
}
if(f==2)
{
printf("Prime");
}
else
{
printf("Not Prime");
}
return 0;
}
/*
C:\cproject>program2_day17.out
7
Prime
C:\cproject>program2_day17.out
10
Not Prime
C:\cproject>*/
