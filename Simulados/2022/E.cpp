#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, x, ans = 0;
    map<int, int> m;
    vector<int> vec;
    cin>> n;

    for (int i = 0; i < n; i++) {
        cin>>x;
        vec.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int pos = vec[i];
        if (m[pos+1] == 0) ans++;
        else m[pos+1]--;
        m[pos]++;
    }

    
    cout << ans << endl;
    return 0;
}