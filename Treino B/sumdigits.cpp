#include <bits/stdc++.h>
using namespace std;

int main() {

    string n;
    cin >> n;
    if (n.length() < 2) {
        cout << "0" << endl; 
        return 0;
    }

    int ans = 11, passos = 0;
    while(ans >= 10) {
        ans = 0;

        for(int j=0;j<n.length();j++){
            ans += (n[j] - '0');
        }
        
        n = to_string(ans);
        passos++;
    }
    
    cout << passos << endl;
    return 0;
}