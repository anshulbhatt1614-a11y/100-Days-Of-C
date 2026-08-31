/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
int n,s=0,t;
scanf("%d",&n);
while(n>0)
{
t=n%10;
s=s+t;
n=n/10;
}
printf("%d",s);
return 0;
}
/*
C:\cproject>program2_day19.out
123
6
C:\cproject>program2_day19.out
999
27
C:\cproject>*/