#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b, c;
    cin >> a >> b >> c;
    int vetor [1000] = {0};
    
    if (a[1] == '>') {
        vetor[a[0]]++;
        vetor[a[2]]--;
    }
    else {
        vetor[a[0]]--;
        vetor[a[2]]++;
    }

    if (b[1] == '>') {
        vetor[b[0]]++;
        vetor[b[2]]--;
    }
    else {
        vetor[b[0]]--;
        vetor[b[2]]++;
    } 

    if (c[1] == '>') {
        vetor[c[0]]++;
        vetor[c[2]]--;
    }
    else {
        vetor[c[0]]--;
        vetor[c[2]]++;
    } 

    //cout << vetor['A'] << " " << vetor['B'] <<  " " << vetor['C'] << endl;

    if (vetor['A'] == vetor['B'] || vetor['A'] == vetor['C'] || vetor['C'] == vetor['B'] ) {
        cout << "Impossible" << endl;
    }
    else {
        if (vetor['A'] < vetor['B'] && vetor['A'] < vetor['C'])
            cout << "A";
        else if (vetor['B'] < vetor['A'] && vetor['B'] < vetor['C'])
            cout << "B";
        else
            cout << "C";
        
        if ((vetor['A'] > vetor['B'] && vetor['A'] < vetor['C']) || (vetor['A'] < vetor['B'] && vetor['A'] > vetor['C']))
            cout << "A";
        else if ((vetor['B'] > vetor['A'] && vetor['B'] < vetor['C']) || (vetor['B'] < vetor['A'] && vetor['B'] > vetor['C']))
            cout << "B";
        else
            cout << "C";

        if (vetor['A'] > vetor['B'] && vetor['A'] > vetor['C'])
            cout << "A";
        else if (vetor['B'] > vetor['C'])
            cout << "B";
        else
            cout << "C";
    }
    return 0;
}