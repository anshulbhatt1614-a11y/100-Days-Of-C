/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
int n,s=0,i,c=0;
scanf("%d",&n);
for(i=1;c<n;i++)
{
if(i%2!=0)
{
s=s+i;
c++;
}
}
printf("%d",s);
return 0;
}
/*
C:\Users\anshu\OneDrive\Desktop\cprog2>at.out
3
9
C:\Users\anshu\OneDrive\Desktop\cprog2>at.out
5
25
C:\Users\anshu\OneDrive\Desktop\cprog2>*/