#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, h;
    cin>>n>>h;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin>>vec[i];
    
    int ans = 0;

    for (int i = 0;  i < n; i++) {
        if (h >= vec[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}