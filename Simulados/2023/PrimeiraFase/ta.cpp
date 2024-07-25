#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define NMAX 100
#define INF 1e9
#define F first
#define S second
vector<pii> grafo[NMAX];

vector<int> bellman_ford (int V, vector<vector<int>>& edges, int S) {

    vector<int> dist(V, INF);
    dist[S] = 0;

    for (int i = 0; i < V-1; i++) {
        for (auto it : edges) {
            int u = it[0]; // Origem
            int v = it[1]; // Destino
            int weight = it[2]; // Peso
            if ( dist[u] != INF && dist[u] + weight < dist[v] ) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    // Esta parte realiza mais 1 ciclo, caso o valor deste último seja negativo
    // significa que entrou em um ciclo negativo
    for (auto it : edges) {
            int u = it[0]; // Origem
            int v = it[1]; // Destino
            int weight = it[2]; // Peso
            if ( dist[u] != INF && dist[u] + weight < dist[v] ) {
                return {-1};
            }
    }

    return dist;
}

// Retirado do canal Take U Foward
vector <int> dijkstra ( int V, vector<vector<int>> adj[], int S) {

    priority_queue < pii, vector<pii>, greater<pii> > heap;
    vector<int> dist(V, INF);

    dist[S] = 0;
    heap.push({0, S});

    while ( heap.empty() ) {
        int dis = heap.top().first;
        int node = heap.top().second;
        heap.pop();

        for (auto it : adj[node]) {
            int adjNode = it[0];
            int edgeWeight = it[1];

            if ( dis + edgeWeight < dist[adjNode] ) {
                dist[adjNode] = dis + edgeWeight;
                heap.push( {dist[adjNode] , adjNode } );
            }
        }
    }

    return dist;
}

int djikstra ( int origem, int destino ) {

    vector<int> distancia(NMAX);
    fill(distancia.begin(), distancia.end(), INF);
    priority_queue< pii, vector<pii>, greater<pii> > heap;

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