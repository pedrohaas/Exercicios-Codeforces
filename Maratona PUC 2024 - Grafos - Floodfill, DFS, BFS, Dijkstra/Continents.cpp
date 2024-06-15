#include <bits/stdc++.h>
using namespace std;

bool isSafe(char mat[][21], int x, int y, int m, int n, bool visitados[][21]) {
    return (x >= 0 &&  x < m && y >= 0 && y < n && mat[x][y] == 'l' && !visitados[x][y]);
}

int DFS (char mat[][21], int x, int y, int m, int n, bool (*visitados)[21]) {

    int ans = 1, temp1 = 0, temp2 = 0;

    static int rowNbr[] = { -1, 0, 0,  1 };
    static int colNbr[] = {  0, 1, -1, 0 };
    
    visitados[x][y] = true;

    for (int i = 0; i < 4; i++) {

        temp1 = x + rowNbr[i];
        temp2 = y + colNbr[i];

        if (temp2 < 0) temp2 = n-1;
        else if (temp2 >= n) temp2 = 0;

        if (isSafe(mat, temp1, temp2, m, n, visitados)) {
            ans += DFS(mat, temp1, temp2, m, n, visitados);
        }
    }

    return ans;
}

int main () {

    int n, m;
    cin>>m>>n;

    char mat[21][21];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            cin>>x;
            mat[i][j] = x;
        }
    }

    int x,y;
    cin>>x>>y;

    int ans = 0;

    bool visitados[21][21];
    memset(visitados, 0, sizeof(visitados));

    // Marca a ilha de Mijid como visitada
    DFS(mat, x, y, m, n, visitados);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 'l' && !visitados[i][j]) {
                ans += DFS(mat, i, j, m, n, visitados);
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}