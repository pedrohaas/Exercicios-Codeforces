#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first 
#define S second
#define NMAX 302
#define INF 1e18
#define int long long

typedef pair<int, int> ii;
vector<ii> conexoes;
vector<ii> grafo[NMAX];
vector<int> distancia(NMAX);
int dist1[NMAX][NMAX];
int dist2[NMAX][NMAX];
int n, m;

int djikstra ( int origem, int destino ) {

    fill(distancia.begin(), distancia.end(), INF);
    priority_queue< ii, vector<ii>, greater<ii> > heap;

    distancia[origem] = 0;
    heap.push({0, origem});

    while (!heap.empty()) {

        int dis = heap.top().F;
        int node = heap.top().S;
        heap.pop();

        if (node == destino) return distancia[destino];
        if ( dis > distancia[node] ) continue;

        for (auto it : grafo[node]) {

            int valorServer = it.first;
            int grafoNode = it.second;

            if ( (node == origem && grafoNode == destino) || (node == destino && grafoNode == origem) ) continue;

            if ( distancia[node] + valorServer < distancia[grafoNode] ) {
                distancia[grafoNode] = distancia[node] + valorServer;
                heap.push({distancia[grafoNode], grafoNode});
            }
        }
    }

    return distancia[destino];
}

void floyd() {
    for(int k = 1;k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                dist2[i][j] = min( dist2[i][j], dist2[i][k] + dist2[k][j] );
            }
        }
    }
}

int32_t main () { faster

    cin>>n>>m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) dist1[i][j] = dist2[i][j] = INF;
        }
    }
    
    for (int i = 0; i < m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        dist1[a][b] = c; dist1[b][a] = c;
        dist2[a][b] = c; dist2[b][a] = c;
        grafo[a].push_back({c, b});
        grafo[b].push_back({c, a});
        conexoes.emplace_back(a, b);
    }

    floyd();

    for (auto it : conexoes) {
        int ans = INF;
        int a = it.F, b = it.S;
        if ( dist2[a][b] < dist1[a][b] ) ans = dist2[a][b];
        else ans = djikstra(a,b);
        cout << (ans != INF ? ans : -1) << "\n";
    }        
}