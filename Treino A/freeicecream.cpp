#include <bits/stdc++.h>
using namespace std;

int main () {

    long long int n, x;
    cin >> n >> x;

    long long int distressed = 0, ans = x;

    while (n--) {
        char signal;
        long long int aux;
        cin >> signal >> aux;

        if (signal == '+')
            ans += aux;
        else {
            if (aux > ans)
                distressed++;
            else
                ans -= aux;
        }
    }

    cout << ans << " " << distressed << endl;
    return 0;
}

// 12 - 2 - 2 (1) - 42 - 22