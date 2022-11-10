// Problem
// Chef's coding class is very famous in Chefland.

// This year XX students joined his class and each student will require one chair to sit on. Chef already has YY chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers XX and YY — the number of students in the class and the number of chairs Chef already has.
// Output Format
// For each test case, output the minimum number of extra chairs Chef must buy so that every student gets one chair.

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	if(t>=1 && t<=1000){
	for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>=0 && x<=100 && y>=0 && y<=100 ){
       if(x<=y){
           cout<<0<<endl;
       }
       else{
           cout<<x-y<<endl;
       }
       
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