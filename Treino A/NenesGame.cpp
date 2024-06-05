#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> retirados, int n) {
    int ans = n;
    bool flag = true;

    while (flag) {
        flag = false;
        int aux = n;

        for (int i = 0; i < (int)retirados.size(); i++) {
            if (retirados[i] <= n) {
                aux--;
                flag = true;
            }
        }

    n = aux;
    }

    ans = n;
    return ans;
}

int main () {

    int t;
    cin>>t;

    while (t--) {
        int k,q;
        cin>>k>>q;
        vector<int> vecA(k), vecN(q), ans(q);
        for (int i = 0; i < k; i++) {
            cin>>vecA[i];
        }

        for (int i = 0; i < q; i++) {
            cin>>vecN[i];
        }
        
        for (int i = 0; i < q; i++) {
            ans[i] = solve(vecA, vecN[i]);
        }

        for (int i = 0; i < q; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    
    return 0;
}