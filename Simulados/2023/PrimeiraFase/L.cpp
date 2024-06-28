#include <bits/stdc++.h>
using namespace std;

int main () { 

    string s;
    int k, i, j = 0, w;

    cin >> s >> k;

    while (true) {
        string aux;
        for (i = j; i < s.size(); i += k){
            aux.push_back(s[i]);
        }
        
        sort(aux.begin(), aux.end());
        w = 0;

        for (i = j; i < s.size(); i += k){
            s[i] = aux[w++];
        }
        
        j++;
        if (j==k) break;
    }

    cout << s << endl;
    return 0;
}