#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while(t--) {

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if ((c > a && d < b) || (c < a && b < d ))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// 3 8 9 1
// 2 9 10 6