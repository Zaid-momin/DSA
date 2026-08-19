/*
Problem: Pyramid Star Pattern

Given an integer n, print a centered pyramid of stars.

For n = 5, the pattern should be:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

Requirements:
- The pattern should contain n rows.
- Row 1 contains 1 star.
- Row 2 contains 3 stars.
- Row 3 contains 5 stars.
- Continue the pattern until row n.
- The stars should be centered like a pyramid.
- Use nested for loops.

Hint:
For each row:
1. Print the required spaces before the stars.
2. Print the required number of stars.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern_3(int n){
        for(int i=1;i<=n;i++){
            for(int j = 1; j <= 2*i-1; j++){
                cout <<"*";
            }
            cout << endl;
        }
    }
};

int main(){
    Solution obj;
    int n;
    cin >> n;

    obj.pattern_3(n);

    return 0;
}