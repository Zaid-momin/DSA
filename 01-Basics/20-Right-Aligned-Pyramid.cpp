/*
Problem: Right-Aligned Star Pyramid

Given an integer n, print a right-aligned pyramid of stars.

For n = 5:

        *
      * *
    * * *
  * * * *
* * * * *

Requirements:
- The pattern should contain n rows.
- Each row should contain one more star than the previous row.
- The stars should be aligned to the right.
- Use nested for loops.
- You need to print spaces before the stars.

Example Input:
5

Expected Output:
        *
      * *
    * * *
  * * * *
* * * * *
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern_6(int n) {

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};