/******************************************************************************
Make AP

Problem
Chef is given two integers AA and CC such that A \leq CA≤C.

Chef wants to find whether there exists any integer BB such that A, B,A,B, and CC are in arithmetic progression.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two space-separated integers AA and CC, the given integers.
Output Format
For each test case, output -1−1 if there exists no integer BB such that A, B,A,B, and CC are in arithmetic progression. Else, output the value of BB.

Constraints
1 \leq T \leq 601≤T≤60
1 \leq A \leq C \leq 101≤A≤C≤10

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,c;
        cin>>a>>c;
        if((a-c)%2==0){
            cout<<(a+c)/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}


/*
 The code is a program that asks the user to input an integer, then prints out the remainder of dividing it by two.
 int main() { int t; cin>>t; while(t--){ int a,c; cin>>a>>c; if((a-c)%2==0){ cout<<(a+c)/2<
 The code will print out the number of values in the list.
 int main() { int t; cin>>t; while(t--){ int a,c; cin>>a>>c; if((a-c)%2==0){ cout<<(a+c)/2<
*/