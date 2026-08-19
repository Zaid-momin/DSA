/*
Problem: Number Pattern

Given an integer n, print the following pattern.

For n = 5:

1
12
123
1234
12345

Requirements:
- The pattern should contain n rows.
- Row 1 should print: 1
- Row 2 should print: 12
- Row 3 should print: 123
- Continue the same pattern until row n.
- Use nested for loops.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern3(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.pattern3(n);

    return 0;
}