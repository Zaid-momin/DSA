/*
Problem: Array Reversal

1. Take an integer n as input.
2. Create an integer array of size n.
3. Take n elements as input into the array.
4. Print all the elements of the array in reverse order.

Example Input:
5
10 20 30 40 50

Expected Output:
50 40 30 20 10
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void array_reversal() {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    }
};