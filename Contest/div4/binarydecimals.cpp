#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        bool flag = true;

        while(n != 1) {
            if ((n % 10) == 0 || (n % 10) == 1) n /= 10;
            else if ((n % 11) == 0 || (n % 11) == 1) n /= 11;
            else {
                flag = false;
                break;
            }
        }

        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    return 0;
}