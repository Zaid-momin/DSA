#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void patter_2(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    Solution obj;
    int n;
    cin >> n;
    obj.patter_2(n);

    return 0;
}