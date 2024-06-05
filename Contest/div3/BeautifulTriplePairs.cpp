#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

bool compare (vector<ll>& a, ll i, ll j) {
    if ((a[i] != a[j] && a[i+1] == a[j+1] && a[i+2] == a[j+2]) ||
        (a[i] == a[j] && a[i+1] != a[j+1] && a[i+2] == a[j+2]) ||
        (a[i] == a[j] && a[i+1] == a[j+1] && a[i+2] != a[j+2]) ) {
            return true;
        }
    else
        return false;
}

ll solve(vector<ll>& vec, ll n) {
    ll ans = 0;

    for (ll i = 0; i < (n - 2); i++) {
        for (ll j = i+1; j < (n - 2); j++) {
            if (compare(vec, i, j)) {
                ans++;
            }
        }
    } 

    return ans;
}

int main () {

    int t;
    cin>>t;

    while (t--) {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(int i = 0; i < n; i++)
            cin>>vec[i];
        cout << solve(vec, n) << endl;
    }

    return 0;
}