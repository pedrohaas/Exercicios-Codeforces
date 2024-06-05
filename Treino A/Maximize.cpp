#include <bits/stdc++.h>
using namespace std;

/*
int gcd(int x) {
    int y = 0, greatCD = 0;

    for (int i = x-1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            //cout << j << " ";
            if ((i % j) == 0 && (x % j) == 0) {
                if ((i + j) > (y + greatCD)) {
                    y = i;
                    greatCD = j;    
                }
            }
        }
    }

    return y;
}*/

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        cout << x-1 << endl;
    }
    return 0;
}