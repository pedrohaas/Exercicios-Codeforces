#include <bits/stdc++.h>
using namespace std;

int n,x,y;

bool verif(int i, int m) {
    if (i >= 0 && i <= m) return true;
    return false;
}

int calc(int i, int j) {
    if (((i + j) % 2) == 1) {return ((i + j) / 2) +1;}
    else {return ((i + j) / 2);}
}

int calc2(int i, int j) {
    return ((i + j) / 2);
}

int main () {

    int ans = 0;
    cin>>n>>x>>y;

    int m = pow(2, n-1);
    int m2 = pow(2, n);
    int i = m;
    int j = m;

    //cout << i << ' ' << j << "\n";

    if (m == x && x == y) {
        cout << "0" << endl;
        return 0;
    }

    while (true) {
        if (x > i) {
            if (verif(x+(x-i),m2)) i = x;
            else i = calc(m2, i);
        } else if (x < i) {
            if (verif(x-(i-x),m2)) i = x;
            else i = calc2(0, i);
        }

        if (y > j) {
            if (verif(y+(y-j),m2)) j = y;
            else j = calc(m2, j);
        } else if (y < j) {
            if (verif(y - (j-y),m2)) j = y;
            else j = calc2(0, j);
        }

        //cout << i << ' ' << j << "\n";
        ans++;
        if (i == x && j == y) break;
    }

    cout << ans << endl;
    return 0;
}