// Exercicio UVA
#include <bits/stdc++.h>
using namespace std; 

#define F first
#define S second
#define INF 1e9

typedef pair<int, int> ii;

int djikstra ( vector<vector<int>> adj[], int n, int origem, int destino) {

    priority_queue< ii, vector<ii>, greater<ii> > heap;
    vector<int> distancia(n);
    for (int i = 0; i < n; i++) distancia[i] = INF;

    distancia[origem] = 0;
    heap.push({0, origem});

    while (!heap.empty()) {

        int dis = heap.top().F;
        int node = heap.top().S;
        heap.pop();

        for (auto it : adj[node]) {

            int valorServer = it[1];
            int adjNode = it[0];

            if (dis + valorServer < distancia[adjNode]) {
                distancia[adjNode] = dis + valorServer;
                heap.push({distancia[adjNode], adjNode});
            }

        }

    }

    if (distancia[destino] == INF) return -1;
    return distancia[destino];

}
 
int main () {

    int t; cin>>t;

    for (int i = 1; i <= t; i++) {

        int n, m, s, t;
        cin>>n>>m>>s>>t;

        vector<vector<int>> adj[n];

        for (int i = 0; i < m; i++) {
            int a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }

        int ans = djikstra(adj, n, s, t);

        if (ans != -1)
            cout << "Case #" << i << ": " << ans << endl;
        else
            cout << "Case #" << i << ": unreachable" << endl;
    }

    return 0;
}