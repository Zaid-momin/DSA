#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void string_exercises() {
        string s;
        cin >> s;

        cout << s[0] << '\n';
        cout << s[s.length() - 1] << '\n';
        cout << s.length() << '\n';

        for (int i = 0; i < s.length(); i++) {
            cout << s[i];
        }
    }
};