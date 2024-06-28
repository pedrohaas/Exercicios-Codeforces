#include <bits/stdc++.h>
using namespace std;
#define NMAX 10005
#define int long long
#define ii pair<int,int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main () { faster

    int mat[NMAX][NMAX], n, x, y;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x>>y;
        mat[x][y] = i+1;
    }



    return 0;
}