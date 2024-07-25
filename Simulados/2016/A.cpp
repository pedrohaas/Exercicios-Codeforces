#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second

int main () { faster

    int a,b,c;
    cin>>a>>b>>c;

    if (a == b || a == c || b == c 
        || (a + b) == c || (a + c) == b 
        || (c + b) == a) cout << "S\n";
    else cout << "N\n";

    return 0;
}