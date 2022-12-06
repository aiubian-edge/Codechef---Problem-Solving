/******************************************************************************
Final Population

Problem
There were initially XX million people in a town, out of which YY million people left the town and ZZ million people immigrated to this town.

Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case consists of three integers XX, YY and ZZ.
Output Format
For each test case, output the final population of the town in millions..

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0 ; i<t; i++){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<x-y+z<<endl;
    }
	return 0;
}

/*
 The code is a program that prints out the distance between two points.
 The first point is inputted by the user and then it loops through three variables, x, y, and z.
 It asks for the coordinates of each point in order to calculate their distance from one another.
 The code starts with int t; which defines an integer variable called t. Then cin>>t; reads in data from the keyboard into this variable called t. This loop will continue until there are no more inputs coming from the user (i
 After that, it goes on to ask for input again but this time using i instead of t as its parameter so that it can keep going even after there are no more inputs coming in from the user (for(int i = 0 ; i
 Next, cin>>x>>y>>z; takes in three integers: x, y and z which represent coordinates of each point respectively before printing them out on cout<
 The code attempts to print out the coordinates of a point on a plane.
 The code starts by reading in an integer value from the user, which is assigned to t. The input is then read in and stored into three variables, x, y, and z.
 These variables are used to store values that represent the x-coordinate, y-coordinate, and z-coordinate respectively.
 Next the for loop iterates through each iteration of the loop until it has processed all of them.
 The output of this for loop will be printed out on screen after every iteration with "x" being replaced with "x-y+z".
*/