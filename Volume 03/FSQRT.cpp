/******************************************************************************
Finding Square Roots
Problem
 

In olden days finding square roots seemed to be difficult but nowadays it can be easily done using in-built functions available across many languages .

Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using in-built functions. So here's your chance.

Input
The first line of the input contains an integer T, the number of test cases. T lines follow. Each line contains an integer N whose square root needs to be computed.

Output
For each line of the input, output the square root of the input integer, rounded down to the nearest integer, in a new line.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
         cin >> n;
         cout << int(sqrt(n)) << endl;
    }
    return 0;
}

/*
 The code is a program that calculates the square root of an integer.
 The code starts by declaring two variables, t and n. It then reads in a value from the user using cin>>t; while(t--) { int n; cin >> n; cout << int(sqrt(n)) << endl;}
 The code will print the square root of the input number, which is a floating point value.
*/

