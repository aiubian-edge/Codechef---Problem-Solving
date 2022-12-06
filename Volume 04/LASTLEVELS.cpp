/******************************************************************************
The Last Levels


Problem
Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are XX levels remaining in the game, and each level takes Chef YY minutes to complete. To protect against eye strain, Chef also decides that every time he completes 33 levels, he will take a ZZ minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of input will contain three space-separated integers XX, YY, and ZZ.
Output Format
For each test case, output on a new line the answer — the length of Chef's gaming session.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float x,y,z,br,c;
        cin>>x>>y>>z;
        c=ceil(x/3);
        br= (c-1)*z;
        cout<<x*y+br<<endl;
    }
	return 0;
}

/*
 The code is a while loop that prints out the value of x, y, and z.
 The code calculates the value of c by using ceil(x/3) and then multiplies it with z to get br.
 Then it prints out x*y+br.
 The code attempts to be used as a loop, which will display the values of x, y, and z in the order they are inputted.
 The code uses cin>> to read in the value of t before using while(t--) to loop through each iteration.
 In each iteration, the program calculates an x coordinate by dividing it by 3 and then calculates a y coordinate by multiplying it with z.
 The program then adds these two coordinates together and prints them out on screen.
*/
