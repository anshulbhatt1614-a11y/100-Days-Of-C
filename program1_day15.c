/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main()
{
int n,p=1;
scanf("%d",&n);
while(n>0)
{
p=p*n;
n--;
}
printf("%d",p);
return 0;
}
/*
C:\Users\anshu\OneDrive\Desktop\cprog2>ao.out
5
120
C:\Users\anshu\OneDrive\Desktop\cprog2>ao.out
3
6
C:\Users\anshu\OneDrive\Desktop\cprog2>*/
