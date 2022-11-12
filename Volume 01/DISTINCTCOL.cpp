// Problem
// There are NN different types of colours numbered from 11 to NN. Chef has A_iA 
// i
// ​
//   balls having colour ii, (1\le i \le N)(1≤i≤N).

// Chef will arrange some boxes and put each ball in exactly one of those boxes.
// Find the minimum number of boxes Chef needs so that no box contains two balls of same colour.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases. The description of the test cases follows.
// The first line of each test case contains a single integer NN, denoting the number of colors.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   — denoting the number of balls having colour ii.
// Output Format
// For each test case, output the minimum number of boxes required so that no box contains two balls of same colour.
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n ; i++) {
	        cin >> a[i];
	    }
	    for (int i = 0; i < n ; i++) {
	        
	        
	        if(a[0] < a[i]){
	            a[0] = a[i];
	        }
	    }
	    cout << a[0] << endl;
	}
	return 0;
}