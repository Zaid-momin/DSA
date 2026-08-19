/*
Problem: Pattern 1

Given an integer n, print a square pattern of stars
with n rows and n columns.

For n = 5, the output should be:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Use nested for loops.

Requirements:
- The outer loop should control the rows.
- The inner loop should control the stars in each row.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};