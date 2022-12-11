/******************************************************************************
Maximise XOR

Problem
Chef has two binary strings AA and BB, each of length NN.

Chef can rearrange both the strings in any way. Find the maximum bitwise XOR he can achieve if he rearranges the strings optimally.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines:
The first line of each test case contains binary string AA.
The second line of each test case contains binary string BB.
Output Format
For each test case, output the maximum bitwise XOR of the strings in binary representation.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       string a,b;
       cin>>a>>b;
       int z,o;
       z=o=0;
       for(int i=0; i<a.length(); i++){
           if(a[i]=='0'){
               z++;
           }
           else{
               o++;
           }
           if(b[i]=='0'){
               z++;
           }
           else{
               o++;
           }
       }
       int temp = min(z,o);
       string r="";
       for(int i = 0 ; i<temp ; i++){
           r+='1';
       }
       for(int i = temp; i<a.length(); i++){
           r+='0';
       }
       cout<<r<<endl;
    }
	// your code goes here
	return 0;
}
