
#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(int a, int b, int c, int d) {
    for (int i = d+1; i < b; i++) {
        if (i % a == 0 && c % i == 0) return i;
    }
    return -1;
}

int main () { faster

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout << solve(a,b,c,d) << endl;

    return 0;
}