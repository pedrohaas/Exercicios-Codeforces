#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, ans = 0, maior = 0;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') maior++;
        else {
            if (maior > 1) ans+= maior;
            maior = 0;
        }
    }

    if (maior > 1) ans+= maior;
    if (ans == 1 ) ans = 0;
    cout << ans << endl;
    return 0;
}