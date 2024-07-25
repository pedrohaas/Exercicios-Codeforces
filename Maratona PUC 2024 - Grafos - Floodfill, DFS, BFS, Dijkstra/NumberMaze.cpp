#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first 
#define S second
#define NMAX 999
#define INF 1e18
#define ii pair<int,int>
#define iii pair<int, ii>

int mat[NMAX][NMAX];
int dist[NMAX][NMAX];

int djikstra (int n, int m) {

    priority_queue< iii, vector<iii>, greater<iii> > heap;

    dist[0][0] = 0; 
    heap.push({0, {0,0}});

    while (!heap.empty()) {

        int dis = heap.top().F;
        int x = heap.top().S.F;
        int y = heap.top().S.S;
        heap.pop();

        if (dis > dist[x][y]) continue;

        // A implementação desse exercicio especifico pedia para percorrer só nessas 4 direções
        int xd[] = {-1, 1, 0, 0};
        int yd[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            
            int xx = x + xd[i];
            int yy = y + yd[i];

            if ( verif(xx, yy, n, m) && dis + mat[xx][yy] < dist[xx][yy] ) {
                dist[xx][yy] = dis + mat[xx][yy];
                heap.push({dist[xx][yy], {xx, yy}});
            }
        }
    }

    return dist[n-1][m-1];
}

int32_t main () { faster

    int t; cin>>t;
    while (t--) {
        
        int n, m; cin>>n>>m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>mat[i][j];
                dist[i][j] = INF;
            }
        }

        int ans = 0;
        ans = djikstra(n, m);
        cout << ans << endl;
    }

    return 0;
}