// Problem
// Harsh was recently gifted a book consisting of NN pages. Each page contains exactly MM words printed on it. As he was bored, he decided to count the number of words in the book.

// Help Harsh find the total number of words in the book.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two space-separated integers on a single line, NN and MM — the number of pages and the number of words on each page, respectively.
// Output Format
// For each test case, output on a new line, the total number of words in the book.

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	if(t>=1 && t<=100){
	for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>=1 && x<=100 && y>=1 && y<=100 ){
        cout<<x*y<<endl;
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