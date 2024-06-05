#include <bits/stdc++.h>
using namespace std;

string creater(string b) {
    sort(b.begin(), b.end());
    //cout << b << endl;
    for (int i = 0; i != (int) b.length() -1; i++) {
        if (b[i] == b[i+1]){
            b.erase(b.begin() + i);
            i--;
        }
    }
    //cout << b << endl;
    return b;
}

string solve(string b, int n) {
    string ans;
    string r = creater(b);

    for (int i = 0; i < (int) b.length(); i++) {
        int pos = r.find(b[i]);
        int posR = (int) ((r.length() - 1) - pos);
        ans += r.at(posR);
    }

    return ans;
}

int main () {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string b;
        cin>>b;
        cout << solve (b, n) << endl;
    }

    return 0;
}