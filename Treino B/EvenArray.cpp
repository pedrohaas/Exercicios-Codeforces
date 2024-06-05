#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &vec, int n) {
    int ans = 0;
    int par = 0, impar = 0;
    
    for (int i = 0; i < n; i++) {
        if (((vec[i] % 2) == 0) && ((i % 2) == 1)) {
            par++;
        } 
        
        if (((vec[i] % 2) == 1) && ((i % 2) == 0)) {
            impar++;
        }
    }

    if (par == impar) ans = par;
    else if (par != impar) ans = -1;
    return ans;
}

int main () {

    int t;
    cin>>t; 
    while(t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin>>vec[i];            }
        cout << solve(vec, n) << endl;
    }

    return 0;
}