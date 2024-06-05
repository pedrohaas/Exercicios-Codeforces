#include <bits/stdc++.h>
using namespace std;

int solve(char mat[30][30], char c, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char cc = tolower(c);
            if (mat[i][j] == c)
                return 1;
            else if (mat[i][j] == cc)
                return 2;
        }
    }
    return 0;
}

int main () {

    int n,m,x,q;
    cin>>n>>m>>x;
    char str[30][30];
    for (int i = 0; i < n; i++) {
        cin>>str[i];
    }

    int row, column;
    bool shift = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (str[i][j] == 'S') {
                row = i;
                column = j;
                shift = true;
            }
        }
    }
    cin>>q;
    string T;
    cin>>T;

    int ans = 0;

    for (int i = 0; i < q; i++) {
        int num = solve(str, T[i], n, m);
        if (num == 2) ans++;
        else if (num == 0) {ans = -1; break;}
    }

    cout << ans << endl;
    return 0;
}