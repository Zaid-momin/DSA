/*
Problem: Number Pattern using Nested Loops

Take an integer n as input and print the following pattern.

For n = 5:

1
12
123
1234
12345

Use two nested for loops:
- Outer loop controls the rows.
- Inner loop controls the numbers printed in each row.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern() {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};