#include <bits/stdc++.h>
using namespace std;

void swap(char vetor[], int a, int b) {
    char aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
}

int main() {
    int n;
    cin >> n;
    string cores = {"ROYGBIV"};

    char vetor[n] = {};
    for(int i = 0, j = 0; i < n; ) {

        int pos = j % 7;
        vetor[i] = cores[pos];
        i++; j++;
        
        if ((i % 7) == 0 && i >= 7)
            swap(vetor, i, i-3);

    }

    for (int i = 0; i < n; i++)
        cout << vetor[i];
    cout << endl;
    return 0;
}