/******************************************************************************
Building Race

https://www.codechef.com/problems/BUILDINGRACE

Problem
Two friends Chef and Chefina are currently on floors AA and BB respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible.

Chef can climb down XX floors per minute while Chefina can climb down YY floors per minute. Determine who will reach the ground floor first. In case both reach the ground floor together, print Both.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains four space-separated integers AA, BB, XX, and YY — the current floor of Chef, the current floor of Chefina, speed of Chef and speed of Chefina in floors per minute respectively.
Output Format
For each test case, output on a new line:

Chef if Chef reaches the ground floor first.
Chefina if she reaches the ground floor first.
Both if both reach the ground floor at the same time.
You may print each character of the string in uppercase or lowercase. For example, the strings CHEF, chef, Chef, and chEF are all considered the same.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a*y==b*x){
            cout<<"Both"<<endl;
        }
        else if(a*y<b*x){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Chefina"<<endl;
        }
    }
	// your code goes here
	return 0;
}
