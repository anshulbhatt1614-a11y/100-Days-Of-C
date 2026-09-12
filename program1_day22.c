/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
int n,i,s=0,st,t=0,j,p=1;
scanf("%d",&n);
st=n;
while(st>0)
{
t=st%10;
for(j=1;j<=t;j++)
{
p=p*j;
}
s=s+p;
p=1;
st=st/10;
}
if(s==n)
{
printf("Strong number");
}
else
{
printf("Not strong number");
}
return 0;
}
/*C:\cproject>program1_day22.out
145
Strong number
C:\cproject>program1_day22.out
123
Not strong number
C:\cproject>*/