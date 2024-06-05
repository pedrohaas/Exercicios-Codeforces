#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char fill(int n) {
    if ((n%3) == 0)
        return 'c';
    else if ((n%3) == 1)
        return 'k';
    else
        return 'g';
}

int main() {
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    vector<vector<char>> mat(n, vector<char>(m, '.'));
    
    while(k--) {
        int a,b;
        cin>>a>>b;
        mat[a-1][b-1] = 'w';
    }

    for(int i=0, v=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (mat[i][j] == '.') {
                mat[i][j] = fill(v);
                v++;
            }
        }
    }

    while(t--) {
        int i, j;
        cin>>i>>j;
        i--; j--;
        if (mat[i][j] == 'c')
            cout << "Carrots" << endl;
        else if (mat[i][j] == 'k')
            cout << "Kiwis" << endl;
        else if (mat[i][j] == 'g')
            cout << "Grapes" << endl;
        else 
            cout << "Waste" << endl;
    }

    return 0;
}