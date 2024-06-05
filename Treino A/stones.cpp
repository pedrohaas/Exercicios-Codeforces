#include <bits/stdc++.h>
using namespace std;

int main () {

    string s, t;
    cin >> s >> t;

    int ans = 0, n = t.length();

    for (int i = 0; i < n; ++i) {
        if (t[i] == s[ans]) {
            ans++;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}