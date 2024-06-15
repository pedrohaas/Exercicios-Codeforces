#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define INF 1e9

typedef pair<int, int> ii;
vector<pair<int,int>> conexoes;
int m;

bool verifica(int ori, int dest) {

    for (int i = 0; i < m; i++) {
        if (ori == conexoes[i].F && dest == conexoes[i].S) return false;
    }

    return true;
}

vector<int> djikstra ( vector<vector<int>> adj[], int n) {

    priority_queue< ii, vector<ii>, greater<ii> > heap;
    vector<int> distancia(n);
    for (int i = 0; i < n; i++) distancia[i] = INF;

    distancia[1] = 0;
    heap.push({0, 1});

    while (!heap.empty()) {

        int dis = heap.top().F;
        int node = heap.top().S;
        heap.pop();

        for (auto it : adj[node]) {

            int valorServer = it[1];
            int adjNode = it[0];

            if ( dis + valorServer < distancia[adjNode] && verifica(node, adjNode) ) {
                distancia[adjNode] = dis + valorServer;
                heap.push({distancia[adjNode], adjNode});
            }
        }
    }

    return distancia;
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n>>m;

    vector<vector<int>> adj[n+2];
    
    for (int i = 0; i < m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
        conexoes.emplace_back(a, b);
    }

    
    vector<int> dis = djikstra(adj, n+1);

    for (int i = 0; i < m; i++) {
        cout << dis[conexoes[i].S] << "\n";
    }
        

    return 0;
}