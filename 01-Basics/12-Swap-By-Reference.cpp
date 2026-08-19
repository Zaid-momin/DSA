/*
Problem: Swap Two Numbers Using Pass by Reference

1. Take two integers a and b as input.
2. Create a function `swapNumbers` that takes both numbers by reference.
3. Swap their values inside the function.
4. Print the values after the function call.

Example Input:
10 20

Expected Output:
20 10

Requirement:
The original variables in main/function caller must actually change.
Use pass by reference.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap_num(int &a, int &b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    obj.swap_num(a, b);

    cout << a << " " << b;
}