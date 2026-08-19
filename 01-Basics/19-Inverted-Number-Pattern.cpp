/*
Problem: Inverted Number Pattern

Given an integer n, print the following pattern.

For n = 5:

12345
1234
123
12
1

Requirements:
- The pattern should contain n rows.
- Row 1 should contain numbers from 1 to n.
- Each subsequent row should contain one fewer number.
- Use nested for loops.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern_5(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout << j;
            }
            cout << endl;
        }
    }
};