/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
int n,b;
scanf("%d",&n);
if(n<=100)
{
b=n*5;
}
else if(n>100 && n<=200)
{
b=(100*5)+((n-100)*7);
}
else if(n>200 && n<=300)
{
b=(100*5)+(100*7)+((n-200)*10);
}
else if(n>300)
{
b=(100*5)+(100*7)+(100*10)+((n-300)*12);
}
printf("Bill: ₹%d",b);
return 0;
}
/*
C:\Users\anshu\OneDrive\Desktop\cprog2>op.out
150
Bill: Γé╣850
C:\Users\anshu\OneDrive\Desktop\cprog2>op.out
50
Bill: Γé╣250
C:\Users\anshu\OneDrive\Desktop\cprog2>op.out
150
Bill: Γé╣850
C:\Users\anshu\OneDrive\Desktop\cprog2>op.out
250
Bill: Γé╣1700
C:\Users\anshu\OneDrive\Desktop\cprog2>
*/