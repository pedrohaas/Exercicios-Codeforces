#include <bits/stdc++.h>
using namespace std;

int main () {

    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin>>vec[i];
        bool flag = false;

        int aux[n];

        for (int i = 0; i < n-1; i++) {
            aux[i] = __gcd(vec[i], vec[i+1]);
        }

        /*
        for (int i = 0; i < n-1; i++) {
            cout << aux[i] << " ";
        }*/
        cout << endl;

        int cont = 0, seq = 0, verifica = 0;
        for (int i = 0; i < n-1; i++) {
            if (aux[i] > aux[i+1]) {
                cont++; verifica = 1;
            } 
            
            else if (aux[i] < aux[i+1]) {
                verifica = 0; 
            }

            if (verifica == 1 && aux[i] == aux[i+1]) seq++;
        }

        if ((cont <= 2 && n > 4 && seq == 0) || ((cont == 0 || cont == 1) && seq <= 1)) {
            flag = true;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}