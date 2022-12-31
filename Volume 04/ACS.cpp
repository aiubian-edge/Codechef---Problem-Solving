/******************************************************************************
Count the ACs

https://www.codechef.com/problems/ACS

Problem
There are 1010 problems in a contest. You know that the score of each problem is either 11 or 100100 points.

Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.

Given the total score PP of the participant, determine the number of problems solved by the participant. Print -1−1 in case the score is invalid.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line containing a single integer PP - denoting the number of points scored by the participant.
Output Format
For each testcase, output the number of problems solved by the participant or -1−1 if the score is invalid.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int temp,o;
        temp= p/100;
        o= p%100;
        if(o+temp<=10)
	    cout<<o+temp<<endl;
	    
	    else
	    cout<<-1<<endl;
    }
	// your code goes here
	return 0;
}
