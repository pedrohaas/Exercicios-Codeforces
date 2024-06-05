#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& vec, vector<int>& ans, int n, int aux) {

    auto pos = find(vec.begin(), vec.end(), aux);
    
    while (ans[*pos-1] != 0 && *pos <= n) 
        *pos++;
    while (ans[*pos+1] != 0 && *pos >= 0) 
        *pos--;

    if (*pos == 0 || *pos == n) return;

    if (pos != vec.end()) 
        ans[*pos] = aux;

    aux--;

    return solve(vec, ans, n, aux);
}

int main () {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin>>vec[i];
        }

        vector<int> ans(n, 0);
        solve(ans, vec, n, n);
        for (int i = 0; i < n ; i++)
            cout << ans[i] << " ";
        cout << endl;
    }


    return 0;
}