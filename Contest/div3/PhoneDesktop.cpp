#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y) {
    int ans = 1, cont = 0;
    int falta = 0;

    while (y) {
        y--;
        cont++;
        if (cont == 3) {
            ans++; cont = 1;
            falta += 7;
        }
    }

    //cout << cont << endl;
    falta += (15 - (cont * 4));
    cont = 0;
    
    while (falta && x) {
        x--;
        falta--;
        //cout << x << " " << falta << endl;
    }

    bool flag = false;

    while (x) {
        if (flag == false) {ans++; flag = true;}

        x--;
        cont++;

        if (cont == 16) {
            ans++;
            cont = 1;
        }
        
    }

    return ans;
}

int main () {
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        if (x == 0 && y == 0) cout << "0" << endl;
        else cout << solve(x,y) << endl;
    }

    return 0;
}