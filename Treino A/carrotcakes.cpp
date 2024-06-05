#include <bits/stdc++.h>
using namespace std;

int main () {

    double n, k, d;
    int t;
    cin >> n >> t >> k >> d;

    double tempo_total = (n / k) * t;
    double tempo_total2 = 0, aux = 0;

    for (int i = 1; ; i++) {
        
        if (i % t == 0) {
            if (i > d)
                aux += k;
             aux += k;
        }
           
        if (aux >= n) {
            tempo_total2 = i;
            break;
        }

    }
    

    if (tempo_total2 < tempo_total)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

    return 0;
}