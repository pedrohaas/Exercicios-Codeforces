#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin>>vec[i];
    }

    for (int i = 0; i < n; i++) {

        if (i == 0) cout << vec[1] - vec[0] << " ";
        else if (i == n-1) cout << vec[n-1] - vec[n-2] << " ";
        else cout << min(vec[i+1] - vec[i], vec[i] - vec[i-1]) << " ";

        if (i == 0) cout << vec[n-1] - vec[0];
        else if (i == n-1) cout << vec[n-1] - vec[0];
        else cout << max(vec[i] - vec[0], vec[n-1] - vec[i]);

        cout << "\n";
    }

    return 0;
}