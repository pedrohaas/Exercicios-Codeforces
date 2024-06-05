#include <bits/stdc++.h>
using namespace std;

int main () {

    int n,m;
    cin>>n>>m;

    vector<pair<int, vector<int> >> vec(n); 
    
    for(int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        vec[a-1].first++; //
        vec[b-1].first++; //
        vec[a-1].second.push_back(b);
        vec[b-1].second.push_back(a);
    }

    int ans = 0;
    bool flag = true;
    

    while(flag) {

        bool aux[n] = {false};
        flag = false;

        for (int i = 0; i < n; i++) {
            if (vec[i].first == 1 && !aux[i]) {
                
                vec[i].first--; // 0
                int elementoLigado = vec[i].second.at(0); // 2
                
                for (int j = 0; j < vec[elementoLigado-1].first; j++) { //
                    if (vec[elementoLigado-1].second[j] == (i+1)) {
                        vec[elementoLigado-1].second.erase(vec[elementoLigado-1].second.begin() + j);
                        break;
                    }
                }

                vec[elementoLigado-1].first--;
                aux[elementoLigado-1] = true;

                flag = true;
            }    
        }

        if (flag)
            ans++;
    }

    cout << ans << endl;
    return 0;
}