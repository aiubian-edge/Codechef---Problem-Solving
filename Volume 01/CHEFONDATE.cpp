// Problem
// Chef and his girlfriend go on a date. Chef took XX dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of YY dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input, containing two space-separated integers XX and YY.
// Output Format
// For each test case, output on a new line "YES" if Chef has enough money to pay the bill and "NO" otherwise.

// You may print each character of the string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	if(t>=1 && t<=100){
	for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>=1 && x<=100 && y>=1 && y<=100){
        if(x<y){
            cout<<"NO"<<endl;
        }
        else if(x==y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
        else{
            cout<<"Constrains are not matching!";
        }
    }
    }else{
    cout<<"Constrains are not matching!";
    }
	// your code goes here
	return 0;
}
