/******************************************************************************
Boring String

Problem
A string is called boring if all the characters of the string are same.

You are given a string SS of length NN, consisting of lowercase english alphabets. Find the length of the longest boring substring of SS which occurs more than once.

Note that if there is no boring substring which occurs more than once in SS, the answer will be 00.

A substring is obtained by deleting some (possibly zero) elements from the beginning of the string and some (possibly zero) elements from the end of the string.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer NN, denoting the length of string SS.
The next contains string SS.
Output Format
For each test case, output on a new line, the length of the longest boring substring of SS which occurs more than once.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define st unordered_set
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string res = "";
        st<string>s;
        res=str[0];
        int l,mx,sum;
        l=mx=0;
        sum=1;
        for(int i =1 ; i<n ; i++){
            if(str[i-1]!=str[i]){
                if(mx<sum){
                    mx=sum;
                    mx--;
                }
                if(s.find(res)!=s.end())
                    l=max(l,sum);
                    s.insert(res);
                    res = str[i];
                    sum=1;
            }
            else{
                sum++;
                res+=str[i];
            }
        }
        if(s.find(res)!=s.end()){
            l = max(l,sum);
        }
        else{
            if(mx<sum){
                mx=sum;
                mx--;
            }
        }
        int ans =max(l,mx);
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
