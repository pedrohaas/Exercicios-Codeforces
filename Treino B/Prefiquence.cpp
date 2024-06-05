#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--) {
        int n, m, ans = 0;
        cin >> n >> m;
        string a, b;
        cin>>a>>b; 

        for(int i = 0, j = 0; i < n; i++) {
            
            if (j >= m) break;

            for (; j < m; j++) {
                if (a[i] == b[j]){
                    ans++; j++;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}