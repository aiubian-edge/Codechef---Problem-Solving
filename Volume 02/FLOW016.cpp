/******************************************************************************

Problem
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output Format
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

*******************************************************************************/
#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
	cout <<gcd(a,b)<<" " << lcm(a, b)<<endl;;
    }
	return 0;
}
