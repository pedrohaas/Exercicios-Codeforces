#include <bits/stdc++.h>
using namespace std;
#define NMAX 10005
#define int long long
#define ii pair<int,int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main () { faster
    map<int, int> m, m2;
    m[0] = m2[0] = 1;
    int n,x, soma = 0, total = 0, parcial = 0;
    cin>>n;

    while(n--) {
        cin>>x;
        
        // Calcula o total possível de combinações tendo em vista que
        // os números devem ser ordenados de forma consecutiva
        total += m[0]++;       

        // Calcula a quantiade de vezes que é obtido um número 1 isolado
        soma = soma ^ x;      // XOR ->  0 0 = 0 / 0 1 = 1 / 1 0 = 1 / 1 1 = 0
        parcial += m2[soma]++;
    }
    
    cout << total - parcial << "\n";
    return 0;
}

//

vector<int> bellman_ford(int V, vector<vector<int>> & edges, int S) {

    vector<int> dist(V, 1e9);


}