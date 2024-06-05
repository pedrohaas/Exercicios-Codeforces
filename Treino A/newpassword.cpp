#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, k;
    cin >> n >> k;
    string newpass;
    newpass.resize(n);
    char j = 'a', aux = 1;
    for (int i = 0; i < n; i++, j++, aux++) {
        newpass[i] = j;  
        if (aux == k) { j = (char)96; aux = 0; }
    }

    cout << newpass << endl;
    return 0;
}

// 1 a - 2 a