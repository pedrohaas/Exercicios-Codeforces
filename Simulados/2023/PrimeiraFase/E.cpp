#include <bits/stdc++.h>
using namespace std;

int retira(int num) {
    string s = to_string(num);
    int ans = 0;
    for (int i = 0; i < (int) s.length(); i++){
        ans += (s[i] - '0');
    }
    return ans;
}

int main() {

    int n, k, ans = 0;
    cin>>n>>k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin>>vec[i];
    sort(vec.rbegin(), vec.rend());
    for (int i = 0; i < k; i++) {
        ans = retira(vec[0]);
        //cout << ans << endl;
        vec[0] -= ans;
        if (vec[0] < vec[1]) sort(vec.rbegin(), vec.rend());
    }

    cout << ans << endl;
    
    return 0;
}