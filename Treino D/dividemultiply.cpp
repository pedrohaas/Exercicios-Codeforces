#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int count3(ll x) {
    int ans = 0;
    while (x % 3 == 0) {
        ans++;
        x /= 3;
    }
    return ans;
}

int main() {
    vector<pair<int, ll>> vec;
    int n; cin>>n;
    vec.resize(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].second;
        vec[i].first = -count3(vec[i].second);
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++) {
        printf("%lld%c", vec[i].second, " \n"[i + 1 == n]);
    }
}