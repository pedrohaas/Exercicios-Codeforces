#include <bits/stdc++.h>
using namespace std;

int main() {
    bool x = false, y = false;
    int n, a, ans = 0;
    cin >> n >> a;
    int vetor[n] = {0};
    for(int i=0;i<n;i++)
        cin >> vetor[i];
    
    for (int i = a-1, j = a-1; ;i++, j--) {
        if (i >= n) x = true;
        if (j < 0) y = true;

        if (i < n && j >= 0) {
            if (vetor[i] && vetor[j]) ans++;
            if (vetor[i] && vetor[j] && i != j) ans++; 
            //cout << i << " " << j << '\n';
        }
        else if (i < n && j < 0) {
            if (vetor[i]) ans++;
            //cout << i << '\n';
        }
        else if (i >= n && j >= 0) {
            if (vetor[j]) ans++;
            //cout << j << '\n';
        }

        if (x && y) break;
    }

    cout << ans << endl;
    return 0;
}