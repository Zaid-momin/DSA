/*
Problem: Find the Maximum Element in an Array

1. Take an integer n as input.
2. Take n integers as input and store them in an array.
3. Find the largest element in the array.
4. Print the largest element.

Example Input:
5
10 45 23 78 31

Expected Output:
78
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void largest_array_num() {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int largest = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        cout << largest;
    }
};