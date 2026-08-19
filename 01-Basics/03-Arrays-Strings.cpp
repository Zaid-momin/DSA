/*
Problem:
Create an integer array of size 5 and take 5 numbers as input.

Tasks:
1. Print the first element of the array.
2. Print the third element of the array.
3. Change the fourth element of the array to 100.
4. Print all elements of the modified array on the same line, separated by spaces.

Example Input:
10 20 30 40 50

Expected Output:
10
30
10 20 30 100 50
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void arrays_exercise(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<arr[0]<<"\n"<<arr[2]<<"\n";
    arr[3]=100;

    for(int i=0;i<5;i++){
        cout << arr[i]<<" ";
    }
}
};