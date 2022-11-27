/******************************************************************************

Problem
Chef has NN friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his NN friends. Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had MM left shoes.

What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his NN friends?

For example, if N = 2N=2, M = 4M=4, then Chef already has 44 left shoes, so he must buy 22 extra right shoes to form 22 pairs of shoes.

Therefore Chef must buy at least 22 extra shoes to ensure that he is able to get N = 2N=2 pairs of shoes.

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers NN and MM - the number of Chef's friends and the number of left shoes Chef has.
Output Format
For each test case, output the minimum number of extra shoes that Chef will have to buy to ensure that he is able to get NN pairs of shoes.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,h,r;
        cin>>n>>m;
        if(m>=n){
            cout<<n<<endl;
        }
        else{
            cout<<2*n-m<<endl;
        }
    }
	return 0;
}
