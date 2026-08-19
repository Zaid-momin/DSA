#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void array_sum(){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum=sum+arr[i];
        }

        cout << sum;
    }
};