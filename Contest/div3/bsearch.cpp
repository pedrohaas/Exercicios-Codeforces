#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main () {
    
    auto inicio = high_resolution_clock::now();

    vector<int> vec(1000001);

    for (int i = 0; i < 1000000; i++) {
        vec[i] = i+1;
    }

    int elemento = 1000000;

    // FUNÇÕES DA STL
    //bool flag = bsearch(vec.begin(), vec.end(), elemento);
    //bool flag = binary_search(vec.begin(), vec.end(), elemento);
    auto it = find(vec.begin(), vec.end(), elemento);
    //auto it = lower_bound(vec.begin(), vec.end(), elemento); // vec.end()

    int pos = distance(vec.begin(), it);

    cout << "Elemento encontrado na posicao: " << vec[pos] << endl;

    auto fim = high_resolution_clock::now();
    auto duracao = duration_cast<milliseconds>(fim - inicio).count();

    cout << "Tempo de duracao: " << duracao << "ms" << endl;

    return 0;
}