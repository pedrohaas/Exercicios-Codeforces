#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

vector<int> buttom;
int dist[10000];

void BFS(int L, int U, int R) {
    queue<int> q;
    dist[L] = 0;
    q.push(L);
    while (!q.empty()) {
        int atual = q.front();
        q.pop();
        if (atual == U) return;

        for (int i = 0; i < R; i++) {
            int prox = atual + buttom[i];
            if (prox > 9999) prox-=10000;
            if (dist[prox]==INF){
                dist[prox] = dist[atual] + 1;
                q.push(prox);
            }
        }
    }
}

int32_t main () {

    int caso = 1, L, U, R;

    while (true) {
        buttom.clear();
        cin>>L>>U>>R;
        if (L == 0 && U == 0 && R == 0) break;

        for (int i = 0; i < R; i++) {
            int x;
            cin>>x;
            buttom.push_back(x);
        }

        for (int i = 0; i < 10000; i++) dist[i] = INF;
        BFS(L, U, R);
            
        dist[U] == INF ? 
            cout << "Case " << caso++ << ": Permanently Locked" :
            cout << "Case " << caso++ << ": " << dist[U];
        cout << endl;
    }

    return 0;
}