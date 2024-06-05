#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll n, f;
    cin>>n>>f;
    ll k[n], l[n];
    vector<pair<ll, ll>> diff; 
    for(int i=0;i<n;i++){
        cin>>k[i]>>l[i];
        diff.push_back(make_pair(min(2 * k[i], l[i] - min(k[i], l[i])), i));
    }

    sort(diff.rbegin(), diff.rend());
    ll ans = 0;
    
    for(int i = 0; i < f; i++) {
        int pos = diff[i].second;
        ans += min(2 * k[pos], l[pos]);
    }

    for (int i=f;i<n;i++) {
        int pos = diff[i].second;
        ans += min(k[pos], l[pos]);
    }

    cout << ans << endl;
    return 0;
}




