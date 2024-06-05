#include <bits/stdc++.h>
using namespace std;

int main () {

    int m,n,ans = 0;
    cin>>m>>n;

    while (n >= 2) {
        ans += m;
        n-=2;
    }

    if (n == 1) ans += m/2;

    cout << ans << endl;
    return 0;
}