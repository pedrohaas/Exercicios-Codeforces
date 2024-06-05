#include <iostream>
#include <vector>
using namespace std;
 
bool igual(vector<char> vetor, char c) {
    for (unsigned int i=0;i < vetor.size();i++)
        if (vetor[i] == c)
            return false;
    return true;
}
 
int main() {
 
    int n, m, row = 0, column = 0;
    char c, aux;
    cin>>n>>m>>c;
 
    vector<pair<int, int>> pres(n+m);
    pres.clear();
    char matrix[n][m];
 
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) { 
 
            cin >> aux;
            matrix[i][j] = aux;
 
            if (aux == c) {
                pres.emplace_back(i, j);
                //cout << i << " " << j << endl;
            }
        }
    }
 
    /*cout << "pres: ";
    for (unsigned int i = 0; i < pres.size();i++){
        cout << pres.at(i).first << " " << pres.at(i).second << " - ";
    }*/
 
    int ans = 0;
    vector<char> letras(n+m);
    letras.push_back(matrix[pres.at(0).first][pres.at(0).second]);
    letras.push_back('.');
 
    //printf("%d\n", pres.at(1).first);
    //    cout << "letras: ";
    //for (unsigned int i = 0; i < letras.size();i++){
    //    cout << letras.at(i);
    //}
    //cout << endl;
 
    for (unsigned int i=0; i < pres.size() ;i++) {
        row = pres.at(i).first;
        column = pres.at(i).second;
 
        if ( row > 0 && igual(letras, matrix[row-1][column]) ) {
            ans++;
            letras.push_back(matrix[row-1][column]);
            //cout << matrix[row-1][column] << " ";
        }
 
        if ( column > 0 && igual(letras, matrix[row][column-1]) ) {
            ans++;
            letras.push_back(matrix[row][column-1]);
            //cout << matrix[row][column -1] << " ";
        }
 
        if ( row < n-1 && igual(letras, matrix[row+1][column]) ) {
            ans++;
            letras.push_back(matrix[row+1][column]);
            //cout << matrix[row+1][column] << " ";
        }
 
        if ( column < m-1 && igual(letras, matrix[row][column+1]) ) {
            ans++;
            letras.push_back(matrix[row][column+1]);
            //cout << matrix[row][column+1] << " ";
        }
 
    }
 
    printf("%d\n", ans);
    return 0;
}
 
//
// G    .   B   .
// .    R   R   .
// T    T   T   .
//