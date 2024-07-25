#include <bits/stdc++.h>
using namespace std;
const int NMAX = 1e5+5;
#define INF 1e18
#define F first
#define S second
#define int long long
#define pii pair<int, int>

vector<pii> grafo[NMAX];

int32_t main () {

    int n, m, k;
    cin>>n>>m>>k;

    int vec[n];
    unordered_map <int, bool> flour;

    for (int i = 0; i < m; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        grafo[u].push_back({v, w});
        grafo[v].push_back({u, w});
    }
    
    for (int i = 0; i < k; i++) {
        int x;
        cin>>x;
        vec[i] = x;
        flour[x] = true;
    }

    int ans = INF;
    
    for (int i = 0; i < k; i++) {
        int deposito = vec[i];
       
        for (auto it : grafo[deposito]) {
            if ( flour[it.F] == false) 
                ans = min(ans, it.S);
        }  
    }

    ans == INF ? cout << -1 : cout << ans;
    cout << endl;
    return 0;
}