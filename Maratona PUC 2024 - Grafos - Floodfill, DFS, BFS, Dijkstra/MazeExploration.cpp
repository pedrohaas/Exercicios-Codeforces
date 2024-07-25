#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first 
#define S second
#define NMAX 999
#define INF 1e18
#define ii pair<int,int>
#define iii pair<int, ii>

char mat[NMAX][NMAX];
int tamLinhas[30];

bool verif(int i, int j) {
    if ( mat[i][j] != 'X' && mat[i][j] != '#') return true;
    return false;
}

void floodfill(int i, int j) {
    mat[i][j] = '#';
    if (verif(i+1, j)) floodfill(i+1, j);
    if (verif(i-1, j)) floodfill(i-1, j);
    if (verif(i, j+1)) floodfill(i, j+1);
    if (verif(i, j-1)) floodfill(i, j-1);
}

void fillmat() {
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 80; j++) {
            mat[i][j] = '\0';
        }
    }
}

int32_t main () {

    int t, I, J; cin >> t; cin.ignore();
    while (t--) {

        fillmat();
        string s; 
        getline(cin, s);
        int k;
        
        for (int i = 0; s[0] != '_'; i++) {
            tamLinhas[i] = s.size();
            for (int j = 0; j < tamLinhas[i]; j++) {
                mat[i][j] = s[j];
                if (s[j]=='*') {I = i; J = j;}
            }
            k=i;
            getline(cin, s);
        }

        floodfill(I, J);

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < tamLinhas[i]; j++) {
                cout << mat[i][j];
            }
            cout << "\n";
        }
        cout << s << "\n";
    }

    return 0;
}