#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () { faster

    int t;
    cin>>t;
    while (t--) {
        string a, b;
        cin>> a >> b;
        string c = a, d = b;
        c[0] = b[0];
        d[0] = a[0];
        cout << c << " " << d << endl;
    }
    return 0;
}