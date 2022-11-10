// Problem
// In the current semester, you have taken XX RTP courses, YY Audit courses and ZZ Non-RTP courses.

// The credit distribution for the courses are:

// 44 credits for clearing each RTP course.
// 22 credits for clearing each Audit course.
// No credits for clearing a Non-RTP course.
// Assuming that you cleared all your courses, report the number of credits you obtain this semester.

// Input Format
// The first line contains a single integer TT, the number of test cases. TT test cases follow. Each test case consists of one line, containing 33 integers separated by spaces.

// The first integer is XX, the number of RTP courses.
// The second integer is YY, the number of Audit courses.
// The third integer is ZZ, the number of non-RTP courses.
// Output Format
// The output must consist of TT lines. The i^{th}i 
// th
//   should consist of a single integer: the number of credits one gets for the i^{th}i 
// th
//   test case.

#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	if(t>=1 && t<=10){
	for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        if(x>=1 && x<=10 && y>=1 && y<=10 && z>=1 && z<=10 ){
       cout<<x*4+y*2<<endl;
    }
    else{
    cout<<"Constrains are not matching!";
    }
    }
    }
    else{
    cout<<"Constrains are not matching!";
    }
	// your code goes here
	return 0;
}