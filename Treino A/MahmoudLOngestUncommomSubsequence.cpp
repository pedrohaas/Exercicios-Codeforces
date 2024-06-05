#include <bits/stdc++.h>
using namespace std;

int main () {

    string a, b;
    cin>>a>>b;

    if (a.length() == b.length() && a != b) {
        cout << a.length() << endl;
    } else if (a.length() != b.length()) {
        cout << max(b.length(), a.length()) << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}