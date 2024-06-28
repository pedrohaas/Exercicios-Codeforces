#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second
#define NMAX 100005
#define INF 1e9
#define ll long long

vector<int> grafo[NMAX];
int p[NMAX];
int v[NMAX];
int ans[NMAX];
int n;



void DFS (int u, int pai, int novo[]) {
    int p, k;
    for (auto it : grafo[u]) {
        if (it != pai) {
            p = lower_bound(novo, novo+n+1, v[it])-novo;
            int save = novo[p];
            novo[p] = v[it];
            k = lower_bound(novo, novo+n+1, INF)-novo;
            ans[it] = k-1;
            DFS(it, u, novo);
            novo[p] = save;
        }
    }
}


int main () { faster
    int x; cin>>n;
    p[0] = -INF;
    for (int i = 1; i <= n; i++) p[i] = INF;
    for (int i = 2; i <= n; i++) {
        cin>>x;
        grafo[x].push_back(i);
        grafo[i].push_back(x);
    }
    for (int i = 1; i <= n; i++) cin>>v[i];
    int key = lower_bound(p, p+n+1, v[1])-p;
    ans[1] = key;
    p[key] = v[1];
    DFS(1, -1, p);
    for (int i = 2; i <= n; i++) cout << ans[i] << " ";
    return 0;
}