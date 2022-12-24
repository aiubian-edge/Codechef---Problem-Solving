/******************************************************************************
A or B
https://www.codechef.com/problems/AORB
Problem
There are two problems in a contest.

Problem A is worth 500500 points at the start of the contest.
Problem B is worth 10001000 points at the start of the contest.
Once the contest starts, after each minute:

Maximum points of Problem A reduce by 22 points .
Maximum points of Problem B reduce by 44 points.
It is known that Chef requires XX minutes to solve Problem A correctly and YY minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY - the time required to solve problems AA and BB in minutes respectively.
Output Format
For each test case, output in a single line, the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a= 500-(x*2);
        int b= 1000-((x+y)*4);
        int c= 500-((y+x)*2);
        int d= 1000-(y*4);
        int s1,s2;
        s1=a+b;
        s2=c+d;
       cout<<max(s1,s2)<<endl;
    }
	// your code goes here
	return 0;
}

