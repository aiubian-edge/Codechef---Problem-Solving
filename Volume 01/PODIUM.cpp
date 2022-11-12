// Problem
// Chef got his dream seat in F1 and secured a 3^{rd}3 
// rd
//   place in his debut race. He now wants to know the time gap between him and the winner of the race.

// You are his chief engineer and you only know the time gap between Chef and the runner up of the race, given as AA seconds, and the time gap between the runner up and the winner of the race, given as BB seconds.

// Please calculate and inform Chef about the time gap between him and the winner of the race.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input containing two space-separated integers AA and BB denoting the time gap between Chef and the runner up and the time gap between the runner up and the winner respectively.
// Output Format
// For each test case, output the time gap between Chef and the winner of the race.

#include <iostream>
using namespace std;

int main() {
    int t,a,b;
    cin>>t;
    if(t>=1 && t<=100)
    {
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>=1 && a<=10 && b>=1 && b<=10){
           cout<<a+b<<endl;
        }
        else{
        cout<<"Constraints Errors";
        }
    }
    }
    else{
        cout<<"Constraints Errors";
    }
	// your code goes here
	return 0;
}