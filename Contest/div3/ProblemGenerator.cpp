#include <bits/stdc++.h>
using namespace std;

int solve(string a, int n, int m) {
    int ans = 0;
    int aux[7] = {0};
    for (int i = 0; i < n; i++) {
        aux[ (int) a[i] - 65 ] ++;
    }

    for (int i = 0; i < 7; i++) {
        if (aux[i] < m) ans+=m-aux[i];
    }

    return ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        string a;
        cin>>a;
        cout << solve(a,n,m) << endl;
    }
    return 0;
}