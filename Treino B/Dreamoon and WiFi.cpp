#include <bits/stdc++.h>
using namespace std;

double solve(string a, string b) {
    double ans = 0, as = 0, bs = 0, is = 0;

    for (unsigned int i = 0; i < a.length(); i++) {
        if (a[i] == '+') as++;
        if (b[i] == '+') bs++;
        else if (b[i] == '?') is++;
    }

    return ans;
}

int main () {

    string a, b;
    cin >> a >> b;
    cout << solve(a, b) << endl;

    return 0;
}