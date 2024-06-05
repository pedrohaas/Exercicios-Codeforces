#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while(t--) {

        string s;
        cin>>s;

        bool ans = false;
        char c = s[0];
        for (int i = 0; i < s.length(); i++){
            if (s[i] != c) {
                s[0] = s[i];
                s[i] = c;
                cout << "YES\n" << s << endl;
                ans = true;
                break;
            }
        }

        if (!ans)
            cout << "NO" << endl;

    }

    return 0;
}