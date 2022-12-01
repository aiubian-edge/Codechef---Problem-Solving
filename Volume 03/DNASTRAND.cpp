/*
Complementary Strand in a DNA

Problem
You are given the sequence of Nucleotides of one strand of DNA through a string SS of length NN. SS contains the character A, T, C,A,T,C, and GG only.

Chef knows that:

AA is complementary to TT.
TT is complementary to AA.
CC is complementary to GG.
GG is complementary to CC.
Using the string SS, determine the sequence of the complementary strand of the DNA.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
First line of each test case contains an integer NN - denoting the length of string SS.
Second line contains NN characters denoting the string SS.
Output Format
For each test case, output the string containing NN characters - sequence of nucleotides of the complementary strand.
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t; i++){
        int n;
        cin>>n;
        char str[n];
        for(int j=0; j<n ;j++){
           cin>>str[j];
        }
        for(int c=0; c<n ;c++){
           if(str[c]=='A'){
               str[c]='T';
            //   cout<<"A called"<<endl;
           }
           else if(str[c]=='T'){
               str[c]='A';
            //   cout<<"T called"<<endl;
           }
           else if(str[c]=='C'){
               str[c]= 'G';
            //   cout<<"C called"<<endl;
           }
           else if(str[c]=='G'){
               str[c]= 'C';
            //   cout<<"G called"<<endl;
           }
        }
        for(int j=0; j<n ;j++){
           cout<<str[j];
        }
        cout<<endl;
    }
    // your code goes here
	return 0;
}

/*
 The code starts by declaring an int variable called t. The code then asks the user to input their number, and stores it in the variable t. Next, the cin statement reads a line of text from the console into a string called str[].
 This is done for each character in turn until there are no more characters left.
 Then, for each character in turn, if that character is 'A', then it will change to 'T'.
 If that same character is 'T', then it will change to 'A'.
 If that same character is 'C', then it will change to 'G'.
 And finally if that same character is G, then it changes back to C. The next part of this program starts with a loop which goes through all of the characters in str[] one at a time and prints them out on screen using cout<>endl;
 The code is meant to print out the letters of a word in reverse order.
 The code starts by reading in an integer value from the user, which will be used as a counter.
 The next line prints out the current number of characters that have been read into the array str[] and then loops through each character in that array.
 For each character, it checks if it's equal to 'A', 'T', 'C', or 'G'.
 If so, it changes its value to 'T' and then moves on to check for any other characters.
 If not, it checks if it's equal to 'C' and changes its value to 'G'.
 It continues this process until all values are changed.
 After looping through all
*/
