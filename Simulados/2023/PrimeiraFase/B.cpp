#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second

/* 
    Para resolver este exercicio deve-se observar a ordem de cada elemento
    em relação à sua posição em ordem crescente, assim a quantidade de trocas
    necessárias é igual a Log na base 2 da quantiade de elementos que são maiores
    que o subsequente.
*/

int main () { faster

    int n, x, temp = 0;
    cin>>n; 

    ii vec;

    for (int i = 0; i < n; i++) {
        cin>>x;
        vec.emplace_back(x, i+1);
    }

    sort(vec.begin(), vec.end());
    int atual = vec[0].S;

    for (int i = 1; i < n; i++) {
        if (vec[i].S < atual) 
            temp++;
        
        atual = vec[i].S;
    }

    int ans = 0;
    if (temp > 0) ans = (int) (log2(temp)) + 1;
    cout << ans << endl;

    return 0;
}


// 5
// 5 4 2 3 1

/*
    [ 5 4 2 3 1 ] -> FIRST
    [ 1 2 3 4 5 ] -> SECOND

    [ 1 2 3 4 5 ] -> FIRST
    [ 5 3 4 2 1 ] -> SECOND

    temp = 3

    log2(3) + 1;
    1000 >> 0100 >> 0010 >> 0001 >> 0000
*/