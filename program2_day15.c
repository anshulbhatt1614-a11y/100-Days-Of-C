/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
	int n,r=0,t=0;
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		r=r*10+t;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
/*C:\Users\anshu\OneDrive\Desktop\cprog2>ao.exe
1234
4321
C:\Users\anshu\OneDrive\Desktop\cprog2>ao.exe
100
1
C:\Users\anshu\OneDrive\Desktop\cprog2>*/

	