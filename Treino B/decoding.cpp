#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s;
    cin>>s;

    char ans[n];
    int pos = 0;

    if ((n % 2) != 0) {

        pos = (n / 2);

        for (int i = 0, j = 0; i < n; i++) {
            if ((i % 2) != 0) {
                ans[pos - j] = s[i];
            }
            else {
                ans[pos + j] = s[i];
                j++;
            }           
        }
    }   else {

        pos = (n / 2) - 1;
        for (int i = 0, j = 0; i < n; i++) {
            if ((i % 2) == 0) {
                ans[pos - j] = s[i];
                j++;
            }
            else {
                ans[pos + j] = s[i];
            }           
        }

    }
    
    for (int i = 0; i < n; i++)
        cout << ans[i];
    cout << endl;
    return 0;
}