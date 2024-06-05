#include <bits/stdc++.h>
using namespace std;

int main () {

    string n;
    cin >>n;

    string s = n;
    reverse(n.begin(), n.end());

    s += n;
    cout << s << endl;
    return 0;
}