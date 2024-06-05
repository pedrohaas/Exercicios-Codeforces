#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {

    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());

    for (int i = n-1; i > 0; i--) {
        if (vec[i] == vec[i-1]) {
            vec.erase(vec.begin() + i);
        }
    }

    cout << (int) vec.size() - 2 << endl;

    return 0;
}