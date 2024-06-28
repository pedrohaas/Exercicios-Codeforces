#include <bits/stdc++.h>
using namespace std;
#define NMAX 105
#define int long long
#define ii pair<int,int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main () { faster
    int n, aux, ans = 0;
    set<ii> visitados;
    int grafo[NMAX][NMAX];
    bool flag = true;
    cin>>n;
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin>>aux;
            grafo[i][j] = aux;
        }
    }

    // Realiza algoritmo de floyd para verificar se há incoerencia
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                if (grafo[i][k] + grafo[k][j] < grafo[i][j]) {
                    flag = false;
                    break;
                }

                // Caso onde há como minimizar o valor do voo
                if ((grafo[i][j] != 0 && grafo[i][k] != 0 && grafo[k][j] != 0) && grafo[i][k] + grafo[k][j] == grafo[i][j]) {
                    // Verifica se este caminho já não foi inserido
                    if (visitados.find({i, j}) == visitados.end()) {
                        visitados.insert({i, j});
                        visitados.insert({j, i});
                        ans++;
                    }
                }
            }

            if (!flag) break;
        }

        if (!flag) break;
    }

    flag == true ? cout << ans << endl : cout << -1 << endl;
    return 0;
}