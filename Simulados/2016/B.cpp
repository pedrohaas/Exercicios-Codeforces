#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii vector<pair<int,int>>
#define F first 
#define S second

int main () { faster

    int n,q,l,r;
    cin>>n>>q;
    ii vec(n);
    for (int i = 0; i < n; i++) {
        cin>>vec[i].F;
        vec[i].S = i;
    }
    while(q--) {
        cin>>l>>r;
        int tam = (r-l) +1;
        
    }

    return 0;
}