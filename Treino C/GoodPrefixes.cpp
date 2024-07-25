#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main () { faster
    int t; cin >> t;
    while (t--) {
        int x, n, sum = 0, ans = 0; 
        map<int, int> m;
        cin >> n;
        vector<int> vec(n);
        
        for (int i = 0; i < n; i++) {
            cin>>x;
            sum+=x;
            m.insert({i, x});
            
        }
        
        cout << ans << endl;
    }
    return 0;
}