/*
Problem: Decreasing Star Pattern

Given an integer n, print a pattern where the number of stars
decreases by one in every row.

For n = 5:

* * * * *
* * * *
* * *
* *
*

Requirements:
- The pattern should contain n rows.
- Row 1 should contain n stars.
- Each subsequent row should contain one fewer star.
- Use nested for loops.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void patter_4(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};