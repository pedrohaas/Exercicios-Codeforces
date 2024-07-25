#include <bits/stdc++.h>
using namespace std;

map <int, list<int> > adj;
vector<bool> visitados(30, false);

void DFS(int v) {
    visitados[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); i++) 
        if (!visitados[*i])
            DFS(*i);
}

int32_t main () {

    std::string line;
    // Ler o número de casos
    std::getline(std::cin, line);
    int num_cases = std::stoi(line);

    fill(visitados.begin(), visitados.end(), false);

    // Ignorar a linha em branco
    std::getline(std::cin, line);

    for (int i = 0; i < num_cases; ++i) {
        if (i > 0) {
            // Ignorar a linha em branco entre os casos
            std::getline(std::cin, line);
        }

        // Ler o maior nome do nó
        std::getline(std::cin, line);
        int n = (int) (line[0] - 'A');

        // Ler as arestas até encontrar uma linha em branco
        while (std::getline(std::cin, line) && !line.empty()) {
            int v = (int) (line[0] - 'A');
            int u = (int) (line[1] - 'A');
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (!visitados[i]) {
                ans++;
                DFS(i);
            }
        }

        cout << ans << '\n' << endl;
    }

    return 0;
}