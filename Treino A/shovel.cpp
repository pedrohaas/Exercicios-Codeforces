#include <bits/stdc++.h>
using namespace std;

int main () {

    int k, r, j = -1;
    cin >> k >> r;

    for (int i = 0; i < 10; i++) {
        int aux = 0;

        aux = k * i;
        if (((aux - r) % 10) == 0 ) {
            j = i;
            break;
        }
    }

    if (j == -1) {
        int i = 1, aux = 0;
        while (j == -1) {
            aux = k * i;
            if ((aux % 10) == 0) {
                j = i;
                break;
            }
            i++;
        }
    }

    cout << j << endl;
    return 0;
}