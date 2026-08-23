/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main()
{
int n,p=1,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
p=p*i;
}
}
printf("%d",p);
return 0;
}
/*
C:\Users\anshu\OneDrive\Desktop\cprog2>ar.out
4
8
C:\Users\anshu\OneDrive\Desktop\cprog2>ar.out
6
48
C:\Users\anshu\OneDrive\Desktop\cprog2>*/