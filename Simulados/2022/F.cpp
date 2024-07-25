#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n, c;
    string s;
    cin>>n>>c;
    map<string,int> m;
    for (int i = 0; i < n; i++) {
        cin>>s;
        auto it = find(s.begin() , s.end(), '*');
        int pos = (int)(it  - s.begin());
        for (char k = 'a'; k <= 'z'; k++) {
            s[pos]=k;
            m[s]++;
        }
    }

    string ans = "";

    for (auto it : m) {
        if (it.second > m[ans]) ans = it.first;
    }

    cout << ans << " "  << m[ans] << endl;
    return 0;
}