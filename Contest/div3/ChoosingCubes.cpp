#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;
    while (t--) {
        int n, f, k;
        cin>>n>>f>>k;
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++){
            int aux;
            cin>>aux;
            vec.emplace_back(aux, i+1);
        }

        sort(vec.rbegin(), vec.rend());

        for (int i = 0; i < n; i++) {
            if (vec[i].second == f) {
                if (k == n) cout << "YES" << endl;
                else if (k == 0) cout << "NO" << endl;
                else if (i < k && vec[k].first != vec[i].first) {
                    cout << "YES" << endl;
                } else if ((i < k && vec[k].first == vec[i].first) ||
                           (i >= k && vec[k-1].first == vec[i].first)) {
                    cout << "MAYBE" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
        
    }

    return 0;
}