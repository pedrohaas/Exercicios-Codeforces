#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin>>vec[i];
    
    bool flagTuna = false, flagEel = false;
    int tuna = 0, eel = 0, ans = 0, aux = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] == 1){
            tuna++;
            flagTuna = true;
        }

        else if (vec[i] == 2) {
            eel++;
            flagEel = true;
        }

        if (vec[i] == 1 && vec[i+1] == 2 && flagEel) {
            aux = min(tuna, eel) * 2;
            ans = max(ans, aux);
            eel = 0;
            flagEel = false;
        }

        if (vec[i] == 2 && vec[i+1] == 1 && flagTuna) {
            aux = min(tuna, eel) * 2;
            ans = max(ans, aux);
            tuna = 0;
            flagTuna = false;
        }
    }

    aux = min(tuna, eel) * 2;
    ans = max(ans, aux);
    cout << ans << endl;
    return 0;
}