/*
Problem: Simple Calculator using Switch Case

1. Take two integers a and b as input.
2. Take a character representing an operator (+, -, *, /).
3. Use a switch statement to perform the corresponding operation:
   - '+' → Addition
   - '-' → Subtraction
   - '*' → Multiplication
   - '/' → Division
4. Print "Invalid" if the operator is not one of the above.

Example Input:
10 5
*

Expected Output:
50
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void switch_calci() {
        int a, b;
        cin >> a >> b;

        char c;
        cin >> c;

        switch(c) {

            case '+':
                cout << (a + b) << endl;
                break;

            case '-':
                cout << (a - b) << endl;
                break;

            case '*':
                cout << (a * b) << endl;
                break;

            case '/':
                cout << (a / b) << endl;
                break;

            default:
                cout << "Invalid" << endl;
        }
    }
};