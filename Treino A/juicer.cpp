#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, b, d, ans = 0;
    cin >> n >> b >> d;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int aux = 0;
        cin >> aux;
        if (aux <= b)
            sum += aux;
        if (sum > d) {
            ans++;
            sum = 0;
        }
    }

    cout << ans << endl;
    return 0;
}