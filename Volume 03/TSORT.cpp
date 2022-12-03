/******************************************************************************
Turbo Sort

Problem
Given the list of numbers, you are to sort them in non decreasing order.

Input
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.

*******************************************************************************/
// #include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;    
    }      
    return 0;
}
/*
 The code is a program that sorts an array of integers.
 The input is the number of elements in the array, and the output is the sorted order.
 The code starts by declaring variables for n, which will be used to store how many elements are in the array, and a[], which will hold all of those elements.
 Then it reads in n from cin and stores it into n. It then creates an empty array called a[].
 It then enters a loop that goes through each element in the list stored in a[] until i reaches 0 (the last element).
 It then calls sort() on this list with two arguments: first argument being "a" (which contains all of our values) and second argument being "a+n", where "n" is what we just read off cin earlier.
 This function takes two arrays as parameters and returns them sorted according to their respective sizes (i.e., smallest value at index 0 would go before largest value at index 1).
 After calling sort(), it enters another loop that goes through each element again but this time prints out its position instead of its value so we can see where they're going after sorting them properly.
 Finally, when done printing out all values, it
 The code will sort the array a of integers from 0 to n-1.
*/

