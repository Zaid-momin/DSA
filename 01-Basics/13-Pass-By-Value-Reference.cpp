/*
Problem: Understand Pass by Value and Pass by Reference

Create two functions:

1. `changeByValue(int x)`
   - Add 10 to x.
   - Print x inside the function.

2. `changeByReference(int &x)`
   - Add 10 to x.
   - Print x inside the function.

In main/function caller:
1. Create an integer x = 20.
2. Call changeByValue(x).
3. Print x after the function call.
4. Call changeByReference(x).
5. Print x after the function call.

Expected Output:
30
20
30
30

Goal:
Observe the difference between passing a variable by value
and passing it by reference.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void by_value(int a){
        a+=10;
    }

    void by_reference(int &a){
        a+=10;
    }
};

int main(){

    Solution obj;
    int x;
    cin >> x;
    obj.by_value(x);
    cout << x << endl;
    obj.by_reference(x);
    cout << x << endl;

}