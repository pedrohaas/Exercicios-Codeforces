#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> x(n);
        for (int i=0;i<n-1;i++) {
            cin>>x[i];
        }
        vector<int> ans;

        ans.push_back((x[0]+1));
        for (int i=1;i<n;i++){
            int valor = x[i-1] + ans[i-1];
            ans.push_back(valor);
        }

        for(int i=0;i<n;i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}