#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () { faster

    int t;
    cin>>t;
    while(t--) {
        int n, m; char aux; 
        cin >> n >> m;
        //char mat[n][m];
        int top = INF, bottom = 0, left = INF, right = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin>>aux;
                //mat[i][j] = aux;
                if (aux == '#') {
                    top = min(top, i);
                    left = min(left, j);
                    bottom = max(bottom, i);
                    right = max(right, j);
                }
            }
        }

        int x, y;
        x = (top + bottom) / 2;
        y = (right + left) / 2;

        //cout << top    << endl;
        //cout << bottom << endl;
        //cout << left   << endl;
        //cout << right  << endl;
        cout << x << " " << y << endl;
    }

    return 0;
}