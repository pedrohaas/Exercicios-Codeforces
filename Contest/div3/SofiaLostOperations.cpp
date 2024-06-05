#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin>>a[i];
        for (int i = 0; i < n; i++)
            cin>>b[i];
        int m;
        cin>>m;
        vector<int> d(m);
        for (int i = 0; i < m; i++)
            cin>>d[i];

        bool flag = false;
        int aux[100000000], maior = 0;

        for (int i = 0; i < n; i++) {
            aux[b[i]]++;
            maior = max(maior, aux[b[i]]);
        }

        for (int i = 0; i < n; i++) {

            int alvo = b[i];
            auto j = find(d.begin(), d.end(), alvo);
            if (j == d.end() || (m < n && maior > 1)) {flag = false; break;}
            
            flag = true;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}