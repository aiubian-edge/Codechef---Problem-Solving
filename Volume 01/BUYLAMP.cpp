// Problem
// An electronics shop sells red and blue lamps. A red lamp costs XX rupees and a blue lamp costs YY rupees.

// Chef is going to buy exactly NN lamps from this shop. Find the minimum amount of money Chef needs to pay such that at least KK of the lamps bought are red.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line containing four space-separated integers N, K, X, YN,K,X,Y.
// Output Format
// For each test case, output on a new line the minimum amount of money Chef needs to pay in order to buy NN lamps such that at least KK of the lamps bought are red.


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(n==k){
            cout<<k*x<<endl;
        }
        else{
            int i,s=x*k;
	         n=n-k;
	         if(x>y)
	         {
	              i=y;
	         }
	         else
	         {
	             i=x;
	         }
	         for(int j=0;j<n;j++){
	             s=s+i;
	         }
	         cout<<s<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
