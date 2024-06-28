#include <bits/stdc++.h>
using namespace std;
#define NMAX 10005
#define int long long
#define ii pair<int,int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main () { faster

    int d, c, r, x, ans = 0;
    cin>>d>>c>>r;

    int cvec[c], rvec[r];
    for (int i = 0; i < c; i++) {
        cin>>cvec[i];
    }
    for (int i = 0; i < r; i++) {
        cin>>rvec[i];
    }

    int i = 0, j = 0;

    while (true) {

        if (i >= c) {
            if (j >= r) break;
            d += rvec[j++]; 
            ans++;
        }
        else  {
            if (d >= cvec[i]) {
                d -= cvec[i++];
                ans++;
            } else {
                if (j >= r) break;
                d += rvec[j++];
                ans++;
            }
        }

    }
        
    cout << ans << endl;
    return 0;
}