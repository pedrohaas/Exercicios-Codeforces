#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () { faster

    bool ans = true;
    string s, aux = "", aux2;
    cin>>s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
            aux += s[i];
    }

    aux2 = aux;
    reverse(aux2.begin(), aux2.end());

    //cout << aux << " " << aux2 << endl;

    for (int i = 0; i < aux.size(); i++) {
        if (aux[i] != aux2[i]) {ans = false; break;}
    }    

    ans == true ? cout << "S" << endl : cout << "N" << endl;
    return 0;
}