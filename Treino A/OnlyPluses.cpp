#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second

int main () { faster

    int t, a, b, c; cin>>t;
    while (t--) {
        cin>>a>>b>>c;
        int count = 5;

        while (count) {
            if (a <= b && a <= c && count) {a++; count--;}
            if (b <= a && b <= c && count) {b++; count--;}
            if (c <= b && c <= a && count) {c++; count--;}
        }

        cout << (a * b * c) << endl;
    }
    return 0;
}