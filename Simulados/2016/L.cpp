#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second
#define NMAX 200
#define INF 40001

int mat[NMAX][NMAX];
int vis[NMAX][NMAX];
int h, l;

bool verif(int i, int j, int n) {
    if (i >= 0 && i < h && j >= 0 && j < l && vis[i][j] == 0 && mat[i][j] == n) return true;
    return false;
}

int contaArea(int i, int j, int n) {

    if (vis[i][j] == 1) return INF;
    int ans = 1;
    vis[i][j] = 1;

    if (verif(i+1, j, n)) ans += contaArea(i+1, j, n);
    if (verif(i, j+1, n)) ans += contaArea(i, j+1, n);
    if (verif(i, j-1, n)) ans += contaArea(i, j-1, n);
    if (verif(i-1, j, n)) ans += contaArea(i-1, j, n);

    return ans;
}

int main () { faster

    int ans = INF; cin>>h>>l;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l;j++) {
            cin>>mat[i][j];
            vis[i][j] = 0;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l;j++) {
            ans = min (ans, contaArea(i,j, mat[i][j]));
        }
    }

    cout << ans << endl;
    return 0;
}