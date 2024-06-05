#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int vec[n], vec2[n];
    for (int i = 0; i < n; i++) {
        cin>>vec[i];
    }

    for (int i = 0; i < n; i++) {
        int temp = vec[i];
        vec2[(vec[temp-1]) - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << vec2[i] << " ";
    cout << endl;
    return 0;
}